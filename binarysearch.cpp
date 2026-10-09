#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
    //  binary searh
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==k){
            cout<<mid<<endl;
            return 0;
        }
        else if(a[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
}