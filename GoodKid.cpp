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
        long int prod = 1;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        a[0] = a[0]+1;
        for(int i=0; i<n; i++){
            prod = prod*a[i];
        }
        cout<<prod<<endl;
    }
}
