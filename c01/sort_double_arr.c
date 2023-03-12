#include <stdio.h>

int main(void){
    
    int arr[3][3]={{15,28,7},{3,8,1},{6,4,13}};
    int min=0,temp=0;
  
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            min = arr[i][k];
            for(int j=i;j<3;j++){

            }
        }
    }



    for(int i=0;i<3;i++){                      
        for(int k=0;k<3;k++){
            printf("%d ",arr[i][k]);
        }
        printf("\n");
    }

 return 0;   

}

/* 15 7 29
   3 8  1
   6 4 13 */