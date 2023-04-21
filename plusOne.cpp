class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
        for(int i=n-1;i>=0;i--){
            if(i== n-1){
                digits[i]++;
            }
                if(digits[i] == 10){
                    digits[i]=0;

                    if(i != 0){
                        digits[i-1]++;
                    }
                    else{
                        digits[i]=1;
                        digits.push_back(0);
                    }
                }
        }
        return digits;
        //long long long integer wont work
        // int n=digits.size();
        // vector<int> v;
        // int r=0,s;
        // for(int i=0;i<n;i++){
        //     r= r*10 + digits[i];
        // }
        // s=r+1;
        // string st= to_string(s);
        // for(int i=0;i<st.size();i++){
        //     v[i]= st[i];
        // }
        // return v;
        //93/111 test cases
        //  int n=digits.size();
        // vector<int> v(n+1);
        // for(int i=0;i<n-1;i++){
        // v[i]= digits[i];
        // }

        // int d= digits[n-1]+1;
        // int d1,d2;
        // if(d>9){
        //     d2= d%10;
        //     d=d/10;
        //     d1= d%10;
        //     v[n-1]=d1;
        //     v[n]=d2;
        // }
        // else{
        //     v[n-1]=d;
        //     v.pop_back();
        // }

        // return v;        
    }
};