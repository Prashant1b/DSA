#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k;
     cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int avg=0;
    for(int i=0;i<k;i++){
       avg=avg+a[i];
    }
    int ans=avg;
    avg=avg/k;
    cout<<avg<<endl;
    for(int i=k;i<n;i++){
        ans=ans-a[i-k];
        ans=ans+a[i];
        avg=ans/k;
        cout<<avg<<endl;
    }
}