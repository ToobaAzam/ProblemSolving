#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        long long a,b,c,d,diff1,diff2;
        cin>>a>>b>>c;

        diff1 = abs(a-1);
        d = abs(b-c);
        diff2 = d+abs(c-1);
        if(diff1<diff2){
            cout<<"1"<<endl;
        }
        else if(diff1>diff2){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }

        t--;
    }
}
