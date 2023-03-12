#include <stdio.h>
int ft_ft(int *a){
    *a=42;
    return *a;

}
int main(void){
    int a;
    
    ft_ft(&a);
    printf("%d",a);
    return 0;
}