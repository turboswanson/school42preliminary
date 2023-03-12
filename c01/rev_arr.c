#include <stdio.h>
void ft_rev_arr(int *arr[],int n){
     for(int i=2;i>=0;i--){
        printf("%d",arr[i]);
    }
}
int main(void){
    int arr[100]={0};

    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    ft_rev_arr(&arr,100);
   
    return 0;
}