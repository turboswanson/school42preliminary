#include <stdio.h>
void swap(int *p_a,int *p_b){
    int temp = *p_a;
    *p_a=*p_b;
    *p_b=temp;
    
}
int main(void){
    int a=10,b=20;
    int *p_a=&a;
    int *p_b=&b;
    printf("a=%d,b=%d\n",a,b);
    printf("*a=%d,*b=%d\n",*p_a,*p_b);
    printf("*a=%p,*b=%p\n",*p_a,*p_b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    printf("*a=%d,*b=%d\n",*p_a,*p_b);
    printf("*a=%p,*b=%p\n",*p_a,*p_b);

    return 0;
}