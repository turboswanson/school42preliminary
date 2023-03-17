#include <stdio.h>
int fibo(int n){
    int arr[100];
    arr[0]= 0;
    arr[1]=1;
    int res=0;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        res = arr[i];
    }
    return res;
}
int main(void){
    int n=12;
    int num = fibo(n);
    printf("%d",num);

    return 0;
}