#include <stdio.h>
#include <math.h>

double integral(int untereG, int obereG, double c){
    double fun[5] = {2, -1, -2, 3, 0};
    double funI[5] = {0, 0, 0, 0, 0};

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

    return 0;
}
