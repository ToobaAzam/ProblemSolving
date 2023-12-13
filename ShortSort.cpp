#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char a,b,c;
        cin>>a>>b>>c;

        if(a=='a'&& b=='b'&& c=='c'){
            cout<<"Yes"<<endl;
        }
        else{
            swap(a,b);
            if(a=='a'&& b=='b'&& c=='c'){
            cout<<"Yes"<<endl;
            }
            else{
                swap(a,b);
                swap(b,c);
                if(a=='a'&& b=='b'&& c=='c'){
                cout<<"Yes"<<endl;
                }
                else{
                    swap(b,c);
                    swap(a,c);
                    if(a=='a'&& b=='b'&& c=='c'){
                    cout<<"Yes"<<endl;
                    }
                    else{
                        cout<<"No"<<endl;
                    }
                }
            }
        }
    }
}
