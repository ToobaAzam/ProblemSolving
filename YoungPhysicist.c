#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    long csum1=0,csum2=0,csum3=0;
    int array[n][3];

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }


    for(i=0; i<n; i++)
    {
        for(int j=0;j<3;j++){
        if(j==0){

            csum1 = csum1 +array[i][j];
        }
        else if(j==1){
            csum2 = csum2 +array[i][j];
        }
        else{
            csum3 = csum3 +array[i][j];
        }
    }
    }


    if(csum1==0 && csum2 ==0 && csum3==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

}
