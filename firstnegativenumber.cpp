#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans;
    for(int i=0;i<=n-k;i++){
        bool ans2=false;
        for(int j=i;j<k+i;j++){
            if(a[j]<0){
                 ans2=true; 
                 ans.push_back(a[j]);
                 break;
            }
        }
        if(!ans2)  ans.push_back(0);
    }
    for(int i:ans) cout<<i<<" ";
    cout<<endl;
}