#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[10][10]=  {
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1}
        };

    while(t--)
    {
        int sum=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                char c;
                cin >> c;
                if(c == 'X')
                {
                    sum += a[i][j];
                }
            }
        }

        cout<<sum<<endl;
    }
}