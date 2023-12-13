#include<stdio.h>
int main(){

    int t,n,x[100];
    scanf("%d,", &t);

     for(int j=0; j<t; j++){
        scanf("%d,", &n);
        for(int i=0; i<n; i++){
            scanf("%d", &x[i]);
        }
        equalCandies(x,n);
    }
}


int equalCandies(int arr[], int len){
    int  min = arr[0];
        for(int i=0; i<len; i++){
         if(arr[i] < min){
            min = arr[i];
        }
    }
    int rem=0,sum=0;
    for(int i=0; i<len; i++){
            if(min<=arr[i]){
        rem = arr[i]-min;
        sum = sum + rem;
    }
    }
    printf("\n%d\n", sum);

}
