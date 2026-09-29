#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
      int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==target){
            cout<<mid;
            return 0;
        }
        else if(a[l]<=a[mid]){
            if(target>=a[l] && target<=a[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if(target>=a[mid] && target<=a[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }     
}