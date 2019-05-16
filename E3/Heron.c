#include <stdio.h>

double hsqrt(double a){
    double x = (a+1)/2;
    double c = 0.001;

    for(int i=0;i<100; i++) {
        x = 0.5 * (x + (a / x));
    }
    return x;
}

int main(){
    printf("%.3f", hsqrt(500));

    return 0;
}
