#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int cnt = 0,mx=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if (arr[i]==1){
             cnt=0;
             continue;
           }

            cnt++;
            if(cnt>mx){
                mx=cnt;
              }

        }
        cout<<mx<<endl;

    }
}
