class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    
	    //time limit exceeds
	   // bool b= false;
	   // for(int i=0;i<n;i++){
	   //     for(int j=i+1;j<n;j++){
	   //         if(arr[i]+ arr[j] == x){
	   //             b=true;
	   //         }
	   //     }
	   // }
	   // return b;
	   
	   //using maps
	  map<int, int> mp;
      for(int i=0;i<n;i++){
        if(mp.find(x- arr[i]) != mp.end()){
            return true;
        }
        mp[arr[i]]++;
      }
      return false;
	}
};