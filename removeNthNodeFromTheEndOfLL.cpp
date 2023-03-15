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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        //just pointing the element before the deleted one to the 
        //element after the deleted one
        
        ListNode* temp= head;
        int s=0;
        while(temp != NULL){
            s++;
            temp= temp-> next;
        }

        if(s==0){
            return NULL;
        }
        if(s==n){
            return head->next;
        }
        int end=s-n;
        s=0;
        temp= head;
        while(temp != NULL){
            s++;
            if(s== end){
                temp-> next = temp->next->next;
            }
            temp= temp->next;
        }
        return head;
    }
};