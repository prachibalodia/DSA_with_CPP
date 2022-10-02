#include <iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }

    string restString= s.substr(1);
    reverse(restString);
    cout<<s[0];

}
int main()
{
    reverse("Prachi");
 
return 0;
}