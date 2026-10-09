#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0,r=s.length()-1;
    while(l<r){
        if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u'||s[l]=='A' || s[l]=='E' || s[l]=='I' || s[l]=='O' || s[l]=='U'){
            if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u'||s[r]=='A' || s[r]=='E' || s[r]=='I' || s[r]=='O' || s[r]=='U'){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else{
                r--;
            }
        }
        else{
            l++;
        }
    }
    cout<<s<<endl;
}