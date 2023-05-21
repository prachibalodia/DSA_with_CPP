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
    ListNode* removeElements(ListNode* head, int val) {
        //checking if all the elements in the linked list are same as val
        while(head != NULL && head->val==val){
            head= head->next;
        }

        if(head== NULL)
        return NULL;
        
        //removing from middle
        if(head->next!= NULL && head->next->val == val){
            head->next= head->next->next;
        }
        head->next= removeElements(head->next, val);
        
        return head;
    }
    
};