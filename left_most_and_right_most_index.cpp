class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        pair<long, long> p;
        // code here
        int k1=0,k2=0,s,l;
        for(int i=0;i<v.size();i++){
            if(v[i] == x){
                k1=1;
                s=i;
                break;
            }
        }
        int n= v.size();
        for(int i= n-1;i>= 0;i--){
            if(v[i] == x){
                k2=1;
                l=i;
                break;
            }
        }
        if(k1==1 && k2== 1){
            p.first=s;
            p.second= l;
        }
        else{
            p.first= -1;
            p.second= -1;
        }
        return p;
    }
};