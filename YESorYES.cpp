#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str;
    while(t>0)
    {
        cin>>str;
        if(str == "YES" || str == "YEs" || str == "YeS"|| str == "yES"
                || str == "Yes" || str == "yeS" || str == "yEs" || str == "yes")
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

        t--;
    }
}
