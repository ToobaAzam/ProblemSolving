#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        int x,y;
        for(int i=0;i<10;i++){
            if(s[i]=='1'){
                x=i;
            }
            else if(s[i]=='3'){
                y=i;
            }
        }

        if(x<y){
            cout<<"13"<<endl;
        }
        else{
            cout<<"31"<<endl;
        }
    }
}
