#include <iostream>
using namespace std;

void findSubsets(char *input, char *output, int i, int j){
    //base case
    if(input[i] == '\0'){
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }

    //rec case
    //including the ith character
    output[j] = input[i];
    findSubsets(input, output, i+1, j+1);

    //excluding the ith character
    findSubsets(input, output, i+1, j);
}
int main()
{
 char input[100];
 char output[100];
 int i=0,j=0;
 cin>>input;
 findSubsets(input, output, i,j);
return 0;
}