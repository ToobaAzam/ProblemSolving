#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
            long long n;
            cin>>n;
            long long arr[n];
            long long sum=0;
            bool flag = 0;
            for(long long i=0;i<n;i++){
                cin>>arr[i];
            }

            for(long long i=0;i<n-1;i++){
                 if(arr[i]==0 && flag==1){
                         sum++;
                    }

                else if(arr[i]!=0){
                 sum += arr[i];
                  flag = 1;
                    }
            }

            cout<<sum<<endl;

            t--; flag=0;
    }

}
