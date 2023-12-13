#include<bits/stdc++.h>
using namespace std;

bool Large(string a, string b)
{
    int l1,l2;
    l1= a.length()-1;
    l2= b.length()-1;
    if(a[l1]=='L' && (b[l2]=='S' || b[l2]=='M') || a[l1]=='M' && b[l2]=='S')
        return true;

    return false;
}

int SameLOrS(string a, string b){

}
bool Small(string a, string b)
{
    int l1,l2;
    l1= a.length()-1;
    l2= b.length()-1;
    if(a[l1]=='S' && (b[l2]=='L' || b[l2]=='M') || a[l1]=='M' && b[l2]=='L')
        return true;
    return false;
}




int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        string str1, str2;
        cin>>str1>>str2;
        int l1,l2;
        l1= str1.length()-1;
        l2= str2.length()-1;
        if(str1.compare(str2)==0)
        {
            cout<<"="<<endl;
        }
        else if(Large(str1,str2))
        {
            cout<<">"<<endl;
        }
        else if(Small(str1,str2))
        {
            cout<<"<"<<endl;
        }
        else if(str1[l1]==str2[l2] && str1[l1]=='L'){
            if(l1>l2){
                cout<<">"<<endl;
            }
            else cout<<"<"<<endl;
        }
        else if(str1[l1]==str2[l2] && str1[l1]=='S'){
            if(l1>l2){
                cout<<"<"<<endl;
            }
            else cout<<">"<<endl;
        }

            t--;

        }
    }

