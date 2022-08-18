#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    //for largest number(integer) in an array, we just put largest= max(largest, arr[i]);
    int n; //number of test cases/or no of sentences entered
    cin>>n;
    cin.get(); // to consume the \n at the end of the n, due to which cin.getline was taking only 2 inputs
    char sen[1000];
    char largest[1000];
    int len=0;
    int llen=0;
    
    while(n--)
    {
        cin.getline(sen,1000);
        len= strlen(sen);
        if(len>llen){
            llen= len;
            strcpy(largest, sen);

        }
        
    }
    cout<<"Largest Sentence is: "<<largest<<endl;

 
return 0;
}