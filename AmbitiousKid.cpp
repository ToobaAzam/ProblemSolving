#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

        ll n,i;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                a[i]=a[i]*(-1);
            }
        }
        sort(a,a+n);
        cout<<a[0]<<endl;

    }
