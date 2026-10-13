#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int i=0,j=n-1;
     int k=0;
   int serja=0,deema=0;
     while(i<=j){
         if(a[i]>a[j]){
            if(k%2==0){
                serja+=a[i];
            }
            else{
                deema+=a[i];
            }
            i++;
         }
         else{
            if(k%2==0){
                serja+=a[j];
            }
            else{
                deema+=a[j];
            }
            j--;
         }
         k++;
     }
     cout<<serja<<" "<<deema<<endl;

}
