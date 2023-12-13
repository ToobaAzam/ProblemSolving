#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        long long mn = (k*(k+1))/2;
        long long diff = n-k;
        long long mx = ((n*(n+1))/2) - ((diff*(diff+1))/2);

        if(x<mn || x>mx){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }

    }
}
