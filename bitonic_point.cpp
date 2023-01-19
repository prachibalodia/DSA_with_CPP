class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int l=0;
	    
	    for(int i=0;i<n;i++){
	        l= max(l, arr[i]);
	    }
	    return l;
	}
};