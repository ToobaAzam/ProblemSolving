#include<bits/stdc++.h>
using namespace std;

int Even(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0)
            return 0;
    }

    return 1;
}

int Odd(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            return 0;
    }

    return 1;
}
int EvenIncrement(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i%2!=0){
            arr[i]++;
        }
    }
    if(Even(arr,n)==1 || Odd(arr,n)==1)
        return 1;

        return 0;
}

int OddIncrement(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]++;
        }
    }
    if(Even(arr,n)==1 || Odd(arr,n)==1)
        return 1;

        return 0;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(Even(arr,n)==1){
        cout<<"YES"<<endl;
    }
    else if(Odd(arr,n)==1){
        cout<<"YES"<<endl;
    }
    else if(EvenIncrement(arr,n)==1){
        cout<<"YES"<<endl;
    }
    else if(OddIncrement(arr,n)==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
              t--;
              solve();

    }
}


