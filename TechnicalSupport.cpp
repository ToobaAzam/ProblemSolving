#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
         cin>>n;
         char arr[n];
         int i;
         for(i = 0 ;i<n; i++){
            cin>>arr[i];
         }
         int cnt=0;
         for(i=0 ;i<n; i++){
             if(arr[i]=='Q') cnt++;
             else if(arr[i]=='A') cnt--;
             if(cnt<0) cnt=0;
          }
         if(cnt==0) cout<<"Yes"<<endl;
         else cout<<"No"<<endl;

 }
}
