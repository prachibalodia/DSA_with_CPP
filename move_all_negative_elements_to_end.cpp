class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        
        vector<int> l,g;
        
        for(int i=0;i<n;i++){
            if(arr[i] < 0){
                l.push_back(arr[i]);
            }
            else{
                g.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<n;i++){
            if(i<g.size()){
                arr[i]= g[i];
            }
            
            else{
                arr[i]= l[i-g.size()];
            }
        }
        
        
        
        
        
        //output format different
        // int i=0;
        // for(int j=0;j<n;j++){
        //     if(!(arr[j] < 0) ){
        //         swap(arr[j],arr[i]);
        //         i++;
        //     }
        // }
    }
};