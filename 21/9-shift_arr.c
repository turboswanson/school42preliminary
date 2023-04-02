#include <stdio.h>

int main(void){
    int n=10;
    int a = 0;
    printf("input number of steps: ") ; //SHIFT-STEPS
    scanf("%d",&a);
                           
    int arr[10]={0};
    
    printf("input array: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int s = 0;
    printf("select: ");
    scanf("%d",&s);

    if (s==1){   
    // LEFT
    for(int i=0;i<a;i++){
        int tmp = arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=tmp;
    }
    }
    

    if(s == 2){  //RIGHT
        for(int i=0;i<a;i++){
            int tmp = arr[n-1];
            for(int i=n-1;i>0;i--){
                arr[i]=arr[i-1];
            }
            arr[0] =tmp;    
    }
    }

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}