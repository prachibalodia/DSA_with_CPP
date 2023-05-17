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
    int pairSum(ListNode* head) {
        //works
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size();
        int sum=0, maxs= INT_MIN;
        for(int i=0;i<n/2;i++){
            sum= v[i]+v[n-1-i];
            maxs= max(maxs, sum);
        }
        return maxs;

        //using stack- works
    //      stack<int>s;
    //     ListNode* temp= head;
    //     while(temp){
    //         s.push(temp->val);
    //         temp= temp->next;
    //     }
    //     int maxs=0;
    //     while(s.size()/2){
    //         maxs= max(maxs, s.top()+head->val);
    //         head= head->next;
    //         s.pop();
    //     }
    //     return maxs;
    }
};