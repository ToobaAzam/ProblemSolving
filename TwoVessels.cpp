#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        double eq = (a+b)/2;
        double diff =(max(a,b))-eq;
        double ans = ceil(diff/c);
        cout<<ans<<endl;

    }
}
