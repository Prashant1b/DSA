#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    // if(s==t){
    //     cout<<"Anagrams"<<endl;
    // }
    // else{
    //     cout<<"Not anagrams"<<endl;
    // }
    vector<int> freq(26,0);
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<t.length();i++){
        freq[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"Not anagrams"<<endl;
            return 0;
        }
    }
    cout<<"Anagrams"<<endl;
    
}