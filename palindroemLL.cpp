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
    // ListNode* reverse(ListNode* head){
    //     if(head == NULL || head->next == NULL){
    //         return head;
    //     }
    //     ListNode* newHead= reverse(head->next);
    //     head->next->next=head;
    //     head->next=NULL;
    //     return newHead;
    // }
    bool isPalindrome(ListNode* head) {

        //doesnt work this way
        // ListNode* temp1=head;
        // ListNode* temp2=reverse(head);
        // if(temp1 == temp2){
        //     return true;
        // }
        // return false;

        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head= head->next;
        }
        for(int i=0;i<v.size()/2;i++){
            if(v[i] != v[v.size()-1-i]){
                return false;
                break;
            }
        }
        return true;
    }
};