#include <iostream>
#include<vector>
using namespace std;
int partition(vector<int> &a, int s, int e){
    int pivot= a[e];
    int i= s-1;

    for(int j=s;j<e;j++){
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i+1], a[e]);
    return i+1;
}
void quickSort(vector<int> &v, int s, int e){
    
    //base case
    if(s>=e){
        return;
    }

    //rec case
    int p= partition(v, s, e);
    quickSort(v, s, p-1);
    quickSort(v, p+1, e);

}
int main()
{
 vector<int> v{4,7,3,5,8,9,2,1,10,0,8};
 int s= 0;
 int e= v.size()-1;
 quickSort(v, s,e);
 for(int i: v){
    cout<<i<<" ";
 }
return 0;
}