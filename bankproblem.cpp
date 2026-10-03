#include<bits/stdc++.h>
using namespace std;
int main(){
    //     int t;
//     cin >> t;

//     while (t--) {
//         long long n, k;
//         cin >> n >> k;

//         long long ans = (1LL << (n - k + 1)) + 2 * (k - 1);

//         cout << ans << '\n';
//     }

    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int temp=n-k;
    long long val=2;
    for(int i=0;i<temp;i++){
        val*=2;
    }
    k--;
      while(k>0){
        val+=2;
        k--;
      }
      cout<<val<<endl;
}
}

