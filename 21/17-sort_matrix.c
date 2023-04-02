/*Отсортировать исходную матрицу т.о. чтобы получилась матрица, которая начинается со строки с минимальной суммой элементов исходной матрицы и далее по возрастанию*/
#include <stdio.h>
#include<stdlib.h>
void f_scan(int *a,int n,int m,int *check){
    int x = 1;
    for(int i=0;i<n;i++){
        
        for(int k=0;k<m;k++){
            if(scanf("%d",(a+i*m+k))!=1){
                * check = 1;
            }
            /**(a+i*m+k)=x;
            x++;*/
                        
            }
        }
    }

void f_swap(int *a,int n,int m){
    int c=0;
    int min=9999;
    int mini = 0;

    for(int i=0;i<n;i++){
            for(int i=0;i<n;i++){
                for(int k=0;k<m;k++){
                    c = c+*(a+i*m+k);

                }
                if (c<min){

                    min = c;
                    mini=i;
                }
            
                c=0;
            }

            for (int k=0;k<m;k++){
                printf("%d ",*(a+mini*m+k));
            }

            if (i!=n-1){
            printf("\n");
            }
            
            for(int k=0;k<m;k++){
                *(a+mini*m+k)=999;
            }
            min = 999;
    }
        
    /*printf("%d",*(a+0)+*(a+1));*/
}

void f_print(int *a,int n,int m){
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            printf("%*d ",3,*(a+i*m+k));
                   
        }
        printf("\n");
    }
}



int main(void){
    int n=3,m=3;
    int * a = (int*)malloc(n*m*sizeof(int));
    
    if(a==NULL){
        printf("n/a\n");
        return 0;
    }
    int check = 0;
    f_scan(a,n,m,&check);

    if(1 == check){
        printf("n/a\n");
        return 0;
    }

    f_swap(a,n,m);

   /* f_print(a,n,m);*/

    free(a);


    return 0;
}