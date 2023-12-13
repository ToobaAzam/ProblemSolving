#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char a[10][10];
        int sum=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>a[i][j];
            }
        }

 //for 1

        for(int j=0; j<=9; j++){
            if(a[0][j]=='X' || a[9][j]=='X'){
                sum = sum + 1;
            }
        }
        for(int i=1; i<=8; i++){
            if(a[i][0]=='X' || a[i][9]=='X'){
                sum = sum + 1;
            }
        }

  //for 2

        for(int j=1; j<=8; j++){
            if(a[1][j]=='X' || a[8][j]=='X'){
                sum = sum + 2;
            }
        }
        for(int i=2; i<=7; i++){
            if(a[i][1]=='X' || a[i][8]=='X'){
                sum = sum + 2;
            }
        }
//for 3
        for(int j=2; j<=7; j++){
            if(a[2][j]=='X' || a[7][j]=='X'){
                sum = sum + 3;
            }
        }
        for(int i=3; i<=6; i++){
            if(a[i][2]=='X' || a[i][7]=='X'){
                sum = sum + 3;
            }
        }
//for 4
        for(int j=3; j<=6; j++){
            if(a[3][j]=='X' || a[6][j]=='X'){
                sum = sum + 4;
            }
        }
        for(int i=4; i<=5; i++){
            if(a[i][3]=='X' || a[i][6]=='X'){
                sum = sum + 4;
            }
        }
//for 5
        for(int j=4; j<=5; j++){
            if(a[4][j]=='X' || a[5][j]=='X'){
                sum = sum + 5;
            }
        }
//        for(int i=5; i<5; i++){
//            if(a[i][4]=='X' || a[i][5]=='X'){
//                sum = sum + 5;
//            }
//        }


        cout<<sum<<endl;
    }
}
