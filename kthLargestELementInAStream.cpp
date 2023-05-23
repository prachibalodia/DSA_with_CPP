#include<iostream>
using namespace std;
#include<vector>
#include<queue>
class KthLargest {
public:
priority_queue<int, vector<int>, greater<int>> pq; 
//here greater<int> is used such that the elements are stored in the increasing fashion, so that pq.top() returns the smallest element first
int size;
    KthLargest(int k, vector<int>& nums) {
        size= k;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size()> size){
            pq.pop();        
            }
            return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */