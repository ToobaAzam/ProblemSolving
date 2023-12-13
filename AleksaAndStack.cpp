#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x=3;
        for(long long i=1;i<=n;i++){
            cout<<x<<" ";
            x=x+2;
        }
    cout<<endl;
    }
}
