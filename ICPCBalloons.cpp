#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt=0;
    cin>>t;

    while(t>0)
    {
        cin>>n;
        char str[n];
        for (int i = 0; i < n; i++)
        {
            cin>>str[i];
        }

        sort(str,str+sizeof(str));

        for(int i = 0; i<n; i++)
        {
            if(n==1 || str[i]!=str[i+1]) cnt++;
        }
        int ans = n + cnt;
        cout<<ans<<endl;
        t--; cnt=0;

    }
}
