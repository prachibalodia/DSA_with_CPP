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
    void reorderList(ListNode* head) {
        //using stack
        
        //for edge cases
        if(!head || !head->next || !head->next->next) return;
        stack<ListNode*> s;
        ListNode* temp= head;
        while(temp != NULL){
            s.push(temp);
            temp = temp->next;
        }

        ListNode* curr= head;
        ListNode* st;
        int n= s.size();
        for(int i=0;i<n/2;i++){
            st= s.top();
            s.pop();
            st->next= curr->next;
            curr->next= st;
            curr= curr->next->next;
        }
        curr->next= NULL;
    }
};