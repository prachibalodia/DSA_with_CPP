class Solution {
public:
    string addStrings(string num1, string num2) {
        //brute force-> T= O(1), S= O(1)-> gives runtime
        // long n1= stol(num1);
        // long n2= stol(num2);
        // long n3= n1+n2;
        // string s= to_string(n3);
        // return s;

        //optimal
        //we add strings manually

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int x= num1.size();
        int y= num2.size();
        int z= abs(x-y);

        if(x<y){
            while(z--){
                num1.push_back('0');
            }
        }
        else if(x>y){
            while(z--){
                num2.push_back('0');
            }
        }
        x= num1.size();
        int carry=0,sum,c;
        string ans="";
        for(int i=0;i<x;i++){
            int a= num1[i]-'0';
            int b= num2[i]-'0';
            sum= a+b+carry;
            if(sum<10){
                ans.push_back(sum+'0');
                carry=0;
            }
            else{
                c=sum%10;
                ans.push_back(c+'0');
                carry=1;
            }
        }
        if(carry==1){
            ans+= '1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};