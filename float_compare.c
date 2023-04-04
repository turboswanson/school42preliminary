#include <stdio.h>
#include <math.h>


double fun() {     
    return (1.0 / 13) * (pow(((2 - 1.0) / (2 + 1.0)), 20)); 
}


int main(void) {
    double res = fun();
    
    if (0 < res && res < 1e-6) {
        printf("OK!\n");
    }
    return 0;
}



