#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n,x;
        cin>>n>>x;
        int arr[2*n];
        bool flag=1;
        for(int i=0; i<(2*n);i++){
            cin>>arr[i];
        }
        sort(arr,arr+(2*n));

        for(int i=0,j=n; i<n,j<(2*n);i++,j++){
            if(arr[j]-arr[i]>= x){
                continue;
            }
            else{
                flag=0;
                break;
            }

        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        t--;
    }
}
