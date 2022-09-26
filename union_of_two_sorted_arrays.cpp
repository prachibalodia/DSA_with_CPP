Class Solution{
    vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        // using MAP
        map<int, int> mp;
for (int i = 0; i < n; i++)
{
    mp[arr1[i]]++;
}
for (int i = 0; i < m; i++)
{
    mp[arr2[i]]++;
}
vector<int> v;

for (auto i : mp)
{
    v.push_back(i.first);
}
sort(v.begin(), v.end());
return v;



//Using SET
set<int> s;
for(int i=0;i<n;i++){
    s.insert(arr1[i]);
}
for(int i=0;i<m;i++){
    s.insert(arr2[i]);
}

vector<int> v(s.begin(), s.end());
return v;
}
};
