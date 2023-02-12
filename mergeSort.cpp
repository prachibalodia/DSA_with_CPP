#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &v, int s, int e){
    int i=s;
    int m= (s+e)/2;
    int j= m+1;
    vector<int> temp;
    while(i<= m && j<= e){
        if(v[i] < v[j]){
            temp.push_back(v[i]);
            i++;
        }
         if(v[i] > v[j]){
            temp.push_back(v[j]);
            j++;
        }
    }

    while(i<=m){
        temp.push_back(v[i++]);
    }
     while(j<=e){
        temp.push_back(v[j++]);
    }

    //copying the elements back to original array
    int k=0;
    for(int x=s;x<=e;x++){
        v[x]= temp[k++];
    }
    return;
}
void mergeSort(vector<int> &v, int s, int e){
    
    //base case
    if(s>=e){
        return;
    }

    //rec case
    int mid= (s+e)/2;
    mergeSort(v,s, mid);
    mergeSort(v, mid+1, e);
    return merge(v, s, e);
}
int main()
{
 vector<int> v{3,4,7,6,0,9,2,1,0,10,3,11};
 int s= 0;
 int e= v.size()-1;
 mergeSort(v, s,e);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
return 0;
}