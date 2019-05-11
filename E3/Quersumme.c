#include <stdio.h>
#include <math.h>

int numberlength(int a) {
    if(a == 0) return 1;

    int len = 0;
    while(a != 0) {
        a /= 10;
        len++;
    }
    return len;


}


int * quersumme() {
    int max = pow(2, 16)-1;
    static int anzahl[ 17 ];
    int querS;
    int currentJ, maxLength;

    for(int i=0; i<=16; i++) {

        for(int j=0; j<=max; j++) {
            querS = 0;
            currentJ = j;
            while(currentJ != 0) {
                querS += currentJ / pow(10,maxLength-1);
                currentJ = currentJ % (int)pow(10,maxLength-1);
                maxLength--;
            }
            if(querS == i)
                anzahl[i]++;
        }
    }

    return anzahl;
}

int main(){
    int * qS = quersumme();
    for(int i=0; i<=16; i++) {
        printf("Quersumme %d    : %d\n", i, *(qS+i));
    }

    int x = pow(2, 16)-1;
    printf("NumberLength of %d is %d\n", x, numberlength(x));

    return 0;
}
