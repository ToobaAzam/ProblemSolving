#include<bits/stdc++.h>
using namespace std;

bool isExtremelyRound(int a){
    string str = to_string(a);
    char const* number_array= str.c_str();
    int n = sizeof(number_array)/sizeof(number_array[0]);
    sort(number_array,number_array+n);
    cout<<str<<endl;
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='1' && str[i]<='9'){
            cnt++;
            if(cnt>1) break;
        }
    }
    if(cnt==1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(isExtremelyRound(i)){
                cnt++;
            }
        }
       cout<<cnt<<endl;
    }
}
