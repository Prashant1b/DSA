#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n, vector<int>(3)); 
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int count=0, ans=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<3;j++ ){
            if(a[i][j]==1) count++;
        }
        if(count>=2) ans++;
    }
    cout<<ans<<endl;

//    int n;
// cin >> n;

// int ans = 0;

// for(int i = 0; i < n; i++) {
//     int count = 0;

//     for(int j = 0; j < 3; j++) {
//         int x;
//         cin >> x;

//         if(x == 1)
//             count++;
//     }

//     if(count >= 2)
//         ans++;
// }

// cout << ans << endl;

}