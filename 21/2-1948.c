#include <stdio.h>

int f_scanf(int num){
    if(scanf("%d",&num) != 1){
         printf("n/a\n");
        return 0;
    }
   
   return num;
       
    }


int f_div(int num){
    int a = 0, b = 0;
    
    for (int i=1;i<10;i++){
        while(a<num){
            a += i;
            
        }
       
        if (a == num && i !=num){
            b = i;
        }
        a=0;
        
    }    
    
    return b;
}

int main(void){
    int num = f_scanf(num);

    if ( num != 0){
    int res = f_div(num);
    printf("%d",res);
    }

    return 0;


}