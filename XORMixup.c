#include<stdio.h>
int main(){

    int i,t,n,x[100];
    scanf("%d", &t);

     for(int j=0; j<t; j++){
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &x[i]);
        }
        printf("%d\n",x[0]);
    }
}

