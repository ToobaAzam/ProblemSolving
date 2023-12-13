#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
         int n;
         cin>>n;
         int arr[n],ans;
         for(int i=0;i<n;i++)
            cin>>arr[i];

        int x = 10-(n+1);
        while(x>0){
            ans += x*6;
            x--;
        }
        cout<<ans<<endl;
         ans=0;
           t--;

    }
}
