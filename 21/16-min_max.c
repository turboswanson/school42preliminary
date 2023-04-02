#include <stdio.h>

int main(void){
    int n=3;
    int m=3;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            scanf("%d",&arr[i][k]);
        }
    }

    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            printf("%d ",arr[i][k]);
        }
        printf("\n");
    }
    printf("* * * * *\n");
        int max = -9999;
      for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            if(arr[i][k]>max){
            max = arr[i][k];
            }
        }
        printf("%d ",max); 
        max = -9999;
      }
      printf("\n");
      printf("* * * * *\n");

      int min = 9999;  
      for(int i=0;i<m;i++){
        for(int k=0;k<n;k++){
            if(arr[k][i]<min){
                min = arr[k][i];
            }
            
        }
        printf("%d ",min); 
            min = 9999;
      }



    return 0;
}
