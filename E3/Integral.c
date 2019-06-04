#include <stdio.h>
#include <math.h>

double integral(double untereG, double obereG, double c){
    double fun[4] = {2, -1, -2, 1};
    double sum = 0;
    double funSum1, funSum2;

<<<<<<< HEAD
    for(int i=0; i<4; i++){
        funI[i+1] = fun[i] / (i+1);
    }

    double zOb, zUn = 0;
    for(int i=0; i<sizeof(funI)/sizeof(double); i++) { // nicht die numerische Intergration!
        zOb += funI[i]*(pow(obereG, i));
        zUn += funI[i]*(pow(untereG, i));
    }
    double erg = zOb - zUn;
    return 0;
    for(int i=0; i<sizeof(funI) / sizeof(double); i++){
        printf("%.2f\n", funI[i]);
    }

}

int main(){
    printf("%.2f", integral(-1,2,1));
=======
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
>>>>>>> d0da8e8f9374a4714047a21f13abfe736f3f9c48

    return 0;
}
