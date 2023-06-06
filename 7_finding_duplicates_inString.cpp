#include <iostream>
using namespace std;
int main()
{
 //methods are:
 //1. comparision of each char to rest all (two loops)
 //2. hash map
 //3. using bits
 char s[]="aabbcde";
 long int x=0,h=0;
 for(int i=0;s[i] != '\0';i++){
    x=1;
    x=x<< s[i]-97;
    if(x&h>0){ //masking
        cout<<"Dup: "<<s[i]<<endl;
    }
    else{
        h=x|h; //merging
    }
 }
return 0;
}