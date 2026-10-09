#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    int ans=0;
    for(int i=k;i<n;i++){
        if(sum>x){
            ans++;
        }
        sum=sum-a[i-k];
        sum=sum+a[i];
    }
     if(sum>x){
            ans++;
        }
    cout<<ans<<endl;
}