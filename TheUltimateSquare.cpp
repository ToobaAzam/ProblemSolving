#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = 0;
        if(n%2==1) ans = ((n+1)/2) ;
        else ans = n/2;

        cout<<ans<<endl;

    }
}
