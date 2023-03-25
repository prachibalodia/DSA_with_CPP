class Solution {
public:
    int minMaxDifference(int number) {
        string num1= to_string(number); 
        string num2= to_string(number);
        char c= num1[0], ch= num1[0];

        for(int i=0;i<num1.size();i++){
            if(num1[i] != '9'){
                c= num1[i];
                break;
            }
        }

        for(int i=0;i<num1.size();i++){
            if(num1[i] == c){
                num1[i]= '9';
            }
        }

        for(int i=0;i<num2.size();i++){
            if(num2[i] == ch){
                num2[i]= '0';
            }
        }
        // stringstream s1,s2;
        // s1<<num1;
        // s2<<num2;

        // int n1, n2;
        // s1<<n1;
        // s2<<n2;
        // return n1-n2;
        
        int maxN=stoi(num1);
        int minN=stoi(num2);
       
        return abs(maxN- minN);
        
    }
};