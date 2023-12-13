#include<bits/stdc++.h>
using namespace std;

bool isBeautiful(int arr[],int x){
    if(arr[0]==arr[1] || arr[0]==0){
            return false;
        }
         int sum=0;
        for(int i=1;i<x;i++){
            for(int j=0;j<i;j++){
                sum = sum + arr[j];
            }
            if(arr[i]==sum){
                return false;
            }
            sum=0;

}
        return true;
}
void swapMxIndex( int arr[],int x){
    int i,mxIdx, mx = arr[0];
    for(i=0;i<x;i++){
        if(arr[i]>arr[0]){
            mx = arr[i];
            mxIdx = i;
        }
    }
    if(mx==arr[0]){
        cout<<"NO"<<endl;
    }
    else swap(arr[0],arr[mxIdx]);

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        if(isBeautiful(a,n)){
         cout<<"Yes"<<endl;
          for(int i=0; i<n;i++){
              cout<<a[i]<<" ";
            }
                cout<<endl;
        }
        else{
            swapMxIndex(a,n);
            if(isBeautiful(a,n)){
                cout<<"YES"<<endl;
                for(int i=0; i<n;i++){
                cout<<a[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
