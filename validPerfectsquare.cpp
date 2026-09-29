#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n;
    cin>>n;
    // newton method 0(log log n)
    if(n<2){
         cout<<"True"<<endl;
         return 0;
    }

    long long x=n;
    while(x*x>n){
        x=(x+n/x)/2;
    }
    cout<<(x*x==n?"True":"False")<<endl;
  

    // int l=0,h=n;
    // while(l<=h){
    //     int mid=l+(h-l)/2;
    //     if(mid*mid==n){
    //         cout<<"True"<<endl;
    //         return 0;
    //     }
    //     else if(mid*mid<n){
    //         l=mid+1;
    //     }
    //     else{
    //         h=mid-1;
    //     }
    // }
    // cout<<"False"<<endl;
}