class Solution {
private:
    int nextNo(int n){
        int next=0, d;
        while(n>0){
            d= n%10;
            next+= d*d;
            n= n/10;
        }
        return next;
    }
public:
    bool isHappy(int n) {

        //brute force-> T= O(logN), S= O(logN)
        // unordered_set<int>s;
        // while(n!=1 && !s.count(n)){
        //     s.insert(n);
        //     n= nextNo(n);
        // }
        // return n==1;

        //Optimal-> T= O(logN), S= O(1)
        //using floyd's cycle-finding algorithm
        int slow=n, fast=nextNo(n);
        while(fast!=1 && fast != slow){
            slow= nextNo(slow);
            fast= nextNo(nextNo(fast));
        }
        return fast==1;
    }
};