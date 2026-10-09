#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0,r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r]){
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        l++;
        r--;
    }
    cout<<"Palindrome"<<endl;
}