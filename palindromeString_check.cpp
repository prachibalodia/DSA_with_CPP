#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[1000];
    int k=0;
    cin.getline(s,1000);
    int len= strlen(s);
    for(int i=0;i<len/2;i++)
    {
        if(s[i] != s[len-i-1])
        {
            
            k=1;
            break;
        }
        
        
    }
    if(k==1){
        cout<<"String is not palindrome"<<endl;

    }
    if(k==0){
        cout<<"String is palindrome"<<endl;

    }
    
    
 
return 0;
}