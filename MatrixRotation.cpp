#include<bits/stdc++.h>
using namespace std;

void Rotate(int arr[2][2]){
    int temp1,temp2,temp3;
    temp1 = arr[0][1];
    arr[0][1] = arr[0][0];
    temp2 = arr[1][1];
    arr[1][1] = temp1;
    temp3 = arr[1][0];
    arr[1][0] = temp2;
    arr[0][0] = temp3;

}
bool isBeautiful(int arr[2][2]){
    if(arr[0][0]<arr[0][1] && arr[1][0]<arr[1][1] &&
       arr[0][0]<arr[1][0] && arr[0][1]<arr[1][1]){
        return true;
    }
        else {
                return false;
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[2][2];
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<4;i++){
            if(isBeautiful(a)){
                cout<<"Yes"<<endl;
                break;
            }
            else{
                if(i==3){
                    cout<<"No"<<endl;
                }
                else{
                        Rotate(a);
                }
            }
        }
    }
}
