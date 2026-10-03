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
    int maxi=v[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(v[i][j]>maxi){
              maxi=v[i][j];
          } 
        }
    }
    cout<<maxi<<endl;
}