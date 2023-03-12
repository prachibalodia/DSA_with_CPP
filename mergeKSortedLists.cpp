/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
        return NULL;

        return divide(lists, 0, lists.size()-1);
        
    }
    ListNode* divide(vector<ListNode*>& lists, int start, int end){
        if(start>end) return NULL;
        if(start == end) return lists[start];

        int mid= start+(end-start)/2;
        ListNode* left= divide(lists, start, mid);
        ListNode* right= divide(lists, mid+1, end);
        return conquer(left, right);
    }
    ListNode* conquer(ListNode* l1head, ListNode* l2head){
        ListNode* dummyHead= new ListNode(-1);
        ListNode* dummyTail= dummyHead;

        while(l1head != NULL && l2head != NULL){
            if(l1head-> val < l2head->val){
                dummyTail->next= l1head;
                l1head= l1head->next;
            }
            else{
                dummyTail->next= l2head;
                l2head= l2head->next;
            }
            dummyTail= dummyTail->next;
        }
        dummyTail->next= (l1head != NULL) ? l1head:l2head;
        return dummyHead->next;
    }
};