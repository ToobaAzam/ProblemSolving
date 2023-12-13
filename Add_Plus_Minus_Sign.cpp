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
        char a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];


        int cnt=0;

        if(a[0]=='1') cnt=1;

        for(int i=1; i<n; i++){
            if(a[i]=='0'){
                cout<<"+";
            }
            else if(a[i]=='1'){
                if(cnt==1) {
                    cout<<"-";
                    cnt=0;
                }
                else{
                    cout<<"+";
                    cnt=1;
                }
            }
        }
        cout<<endl;
    }
}
