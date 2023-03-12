#include <stdio.h>

void ft_rev_arr(int *arr_1[],int n){
    
    int min=0,temp=0;
    
   

    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){ 
            min = arr_1[i];
            if(arr_1[k]<min){
                temp = arr_1[i];
                arr_1[i]=arr_1[k];
                arr_1[k]=temp;        

            }
           
        }
        
    }

    if(arr_1[0]<arr_1[n-1]){  // HOW??????????//
        printf("YES");
    }
    else{
        printf("NO");
    }
  

    for(int i=0;i<5;i++){
        printf("%d ",arr_1[i]);
    }

   
}
    int main(void){
        int n=5;
        int arr_1[n];

        for(int i=0;i<n;i++){
            scanf("%d",&arr_1[i]);
        }

        ft_rev_arr(&arr_1,n);

       


         return 0;
    
    }        
    

        
   

    
