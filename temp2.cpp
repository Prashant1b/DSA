#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    //diagonal sum
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=v[i][i];
        sum2+=v[i][m-i-1];
    }
    cout<<sum1+sum2-v[n/2][n/2]<<endl;
}