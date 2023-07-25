class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //brute force-> O(N), S=O(1)
        // int n= arr.size();
        // for(int i=1;i<n;i++){
        //     if(arr[i-1] > arr[i]) return i-1;
        // }
        // return n-1;

        //optimal-> using binary search-> T= O(logN), S= O(1)
        int n= arr.size();
        int s= 0, e= n-1;

        while(s<=e){
            int mid= (s+e)/2;
            mid = (mid==0)? 1:(mid==n-1)? n-2:mid;
            if(arr[mid] > arr[mid-1] && arr[mid]> arr[mid+1]) return mid;
            else if(arr[mid+1] >arr[mid]) s= mid+1;
            else e=mid-1;
        }
        return n-1;
    }
};