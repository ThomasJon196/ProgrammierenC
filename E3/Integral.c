#include <stdio.h>
#include <math.h>

double integral(double untereG, double obereG, double c){
    double fun[4] = {2, -1, -2, 1};
    double sum = 0;
    double funSum1, funSum2;

    while(untereG < obereG){
        funSum1 = 0;
        funSum2 = 0;
        for(int j=0; j<4; j++) {
            funSum1 += fun[j]* pow(untereG, j);
            funSum2 += fun[j]* pow((untereG+c), j);
        }

        sum += 1/2 * (funSum1+funSum2) * ((untereG+c) - untereG);
        untereG += c;
    }
    return sum;
}

int main(){
    printf("%.3f", integral(-1,2,0.01));

    return 0;
}
