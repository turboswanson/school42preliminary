#include <stdio.h>
#include <stdlib.h>
#define NMAX 100

void input(int* c,int *n,int *m,int *flag);
void ft_static(int n,int m);
void input_static(int n,int m,int arr[][m],int *flag);
void output_static(int n,int m,int arr[][m],int *flag);




int main(){
   int c = 0;
   int n = 0;
   int m = 0;
   int flag = 0;
   input(&c,&n,&m,&flag);

   if(flag ==0){
    switch(c){
        case (1):
        ft_static(n,m);
        break;
    }
   } 
  
}

void input(int* c,int *n,int *m,int *flag){
    int z = 0;

    if(scanf("%d.%d",c,&z) != 1 || *c <= 0 ||*c >4 ){
        printf("n/a");
        *flag = 1;
    }

    else{
        if(scanf("%d %d.%d",n,m,&z) !=2 ||*n<=0 ||*m <=0 || *c==1 && (*n>NMAX ||*m > NMAX)){
            printf("n/a");
            *flag = 1;
        }
    }
}

void ft_static(int n,int m){
    int arr[NMAX][NMAX];
    int flag = 0;
    input_static(n,m,arr,&flag);
    output_static(n,m,arr,&flag);
}

void input_static(int n,int m,int arr[][m],int *flag){
    int z = 0;

    for(int i =0;i<n;i++){
        for(int k = 0;k<m;k++){
            if(scanf("%d.%d",(*(arr+i)+k),&z)!=1){
                *flag =1;
            }
        }
    }
}

void output_static(int n,int m,int arr[][m],int *flag){
    if(*flag == 0){
        for(int i = 0;i<n;i++){
            for(int k = 0;k<m;k++){
                printf("%d",*(*(arr+i)+k));
                if(k != k-1){
                    printf(" ");
                }
                if(k == m - 1 && i != n-1){
                    printf("\n");
                }
            }
        }
    }

    else{
        printf("n/a");
    }
}
