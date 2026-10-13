#include<bits/stdc++.h>
using namespace std;    
int main(){
    string s;
    cin>>s;
    int one=0,two=0,three=0;
    for(char c:s){
        if(c=='1') one++;
        if(c=='2') two++;
        if(c=='3') three++;
    }
    string ans="";
    for(int i=0;i<one;i++){
        ans+="1+";
    }
    for(int i=0;i<two;i++){
        ans+="2+";
    }
    for(int i=0;i<three;i++){
        ans+="3+";
    }
    ans.pop_back();
    cout<<ans<<endl;
}