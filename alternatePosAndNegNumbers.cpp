class Solution{
public:

	void rearrange(int a[], int n) {
	    // code here
	    vector<int> neg;
	    vector<int> pos;
	    for(int i=0;i<n;i++){
	        if(a[i]<0){
	            neg.push_back(a[i]);
	        }
	        else{
	            pos.push_back(a[i]);
	        }
	    }
	    int i=0, j=0, k=0;
	    while(j<pos.size() && k<neg.size()){
	        a[i++]= pos[j++];
	        a[i++]= neg[k++];
	    }
	     while(j<pos.size() ){
	        a[i++]= pos[j++];
	        
	    }
	     while(j<neg.size() ){
	        a[i++]= neg[j++];
	        
	    }
	    
	    
	}
};