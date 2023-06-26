class Solution {
public:
    bool isPerfectSquare(int num) {
        //brute force
        // for(int i=1;;i++){
        //     if(i*i==num)return true;
        //     if(i*i >num) return false;
        // }

        //optimal-> binary search-> T= O(nlogn), S= O(1)
        int s=1,e=num;
        while(s<=e){
            long long mid= s+(e-s)/2;
            long long m=mid*mid;
            if(m==num)return true;
            else if(m>num)e=mid-1;
            else
            s= mid+1;
        }
        return false;
    }
};