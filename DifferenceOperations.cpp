#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt=0;
    cin>>t;

    while(t>0)
    {
        cin>>n;
     int a[n];
     bool fg = 0;
     for(int i =0;i<n;i++) cin>>a[i];

     for(int i=1;i<n;i++){
        if(a[i]%a[0]==0){
            fg = 1;
        }
        else {
        fg=0;
        break;
        }
     }
     if(fg) cout<<"YES "<<endl;
     else cout<<"NO"<<endl;
        t--;

    }
    }

