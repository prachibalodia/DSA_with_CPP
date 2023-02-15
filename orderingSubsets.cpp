//program to sort the generated vector lexicographically + by the order of length

#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

//custom comparator
bool compare(string a, string b){
    if(a.length() == b.length()){
        return a < b;   //lexicographic
    }
    return a.length() < b.length(); 

}

void findSubsets(char *input, char *output, int i, int j,  vector<string> &list){
    //base case
    if(input[i] == '\0'){
        output[j] = '\0';
        
        string temp(output);
        list.push_back(temp);
        return;
    }

    //rec case
    //including the ith character
    output[j] = input[i];
    findSubsets(input, output, i+1, j+1, list);

    //excluding the ith character
    findSubsets(input, output, i+1, j, list);
}
int main()
{
 char input[100];
 char output[100];
 vector<string> list;
 int i=0,j=0;
 cin>>input;

 findSubsets(input, output, i,j, list);
 sort(list.begin(), list.end(), compare);

 for(string s: list){
    cout<< s<< ",";
 }
// for(int i=0;i<list.size();i++){
//     cout<< list[i]<< " ,";
// }
return 0;
}