#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
         cin>>n;
         long long arr[n], s1=0,s2=0;
         for(long long i=0;i<n;i++){
            cin>>arr[i];
         }
         for(long long i=0;i<n;i++){
            if(arr[i]<0){
                s1 = s1+arr[i];
            }
            else{
                s2 = s2 +arr[i];
            }
         }
         long long diff = (s1*(-1)) - s2;
         if(diff<0){
         cout<<diff*(-1)<<endl;
         }
         else cout<<diff<<endl;
 }
}
