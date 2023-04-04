#include <stdio.h>

int main() {
    float x,y;
    char c1,c2;
    
    scanf("%f%c%f%c",&x,&c1,&y,&c2);

    if (c1 != 32 || c2 != '\n') {
        printf("n/a\n");
        return 0;
    }

    x*x + y*y < 25 ? printf("GOTCHA") : printf("MISS");
  
    return 0;
}


