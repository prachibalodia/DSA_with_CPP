#include <iostream>
using namespace std;
int main()
{
 string s1="prachi";
 string s2= "Prachi";
 if(s1==s2)cout<<"1st strings matches";
 else cout<<"1st strings doesnt match";
cout<<endl;
 string s3="prachi";
 string s4= "prachi";
 if(s3==s4)cout<<"2nd strings matches";
 else cout<<"2nd strings doesnt match";
cout<<endl;

//or

 string s5="prachi";
 string s6= "balodia";
 if(s5.compare(s6) ==0)cout<<"strings matches";
 else if(s5.compare(s6) >0)cout<<"1st string is greater";
 else cout<<"2nd string is greater";

 //or > < <= >= can also be used
return 0;
}