#include <stdio.h>
#include <math.h>

double diam(double a);
double hyper(double a);
double bern(double a);

int main(void) {
    double pi = 3.14159265358979323846;
    for (double i = -pi; i < pi; i += pi/21) {
        if (bern(i) != NAN) {
            printf("%.7lf | %.7lf | %.7lf | %.7lf\n",i,diam(i), bern(i), hyper(i));
       
        } /*else {
            printf("%.7lf | %.7lf | - | %.7lf\n",i, diam(i), hyper(i));
        }*/
    }
    return 0;
}

double diam(double a) {
    return 1/(1 + a * a);
}

double bern(double a) {
    return sqrt(sqrt(1+4*a*a)-a*a-1);
}

double hyper(double a) {
    return 1 / (a * a);
}