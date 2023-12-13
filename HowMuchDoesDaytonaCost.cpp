#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int cnt = 0;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==k){
               cnt=1;
            }
        }
        if(cnt==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

