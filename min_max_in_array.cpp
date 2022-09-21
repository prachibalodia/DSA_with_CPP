pair<long long, long long> getMinMax(long long a[], int n) {
    long mx= a[0];
    long mn= a[0];
    for(int i=0;i<n;i++){
        if(a[i]> mx){
            mx= a[i];
        }
        if(a[i]< mn){
            mn=a[i];
        }
    }
    pair<long long, long long> p;
    p.first= mn;
    p.second= mx;
    return {mn,mx};
    
}