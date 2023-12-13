#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n,k,cnt=0;
        cin>>n;
        cin>>k;
        char a[n];
        for(long long int i=0; i<n; i++){
            cin>>a[i];
        }
        for(long long int i=0; i<n; i++){
            if(a[i]=='B'){
                cnt++;
                i = i+(k-1);
            }
        }

        cout<<cnt<<endl;

    }
}
