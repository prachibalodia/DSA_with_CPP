class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i=0;
	    for(int j=0;j<n;j++){
	        if(arr[j] != 0){
	            swap(arr[i], arr[j]);
	            i++;
	        }
	    }
	}
};