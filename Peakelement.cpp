#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,h=n-1;
    while(l<h){
        int mid=l+(h-l)/2;
        if(a[mid]>a[mid+1]) h=mid;
        else l=mid+1;
    }
    cout<<l<<endl;
}