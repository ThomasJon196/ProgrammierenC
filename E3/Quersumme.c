#include <stdio.h>
#include <math.h>

//Fedisch
// Quersumme berechnet alle Quersummen von 0 bis MAX und hat als
// Rückgabewert einen Zeiger auf ein Feld welches die jeweilige Anzahl an Quersummen
// welche die Zahlen 0 bis 16 ergeben.
int* quersumme() {
    int MAX = pow(2, 16)-1;
    static int anzahl[ 17 ];
    int temp;
    int qSum;

    for(int i=0; i<MAX; i++){
        temp = i;
        qSum = 0;
        while(temp != 0){
            qSum += temp%10;
            temp /= 10;
        }
        if(qSum <= 16)
            anzahl[qSum]++;
    }
    return anzahl;
}

int main(){

    int *quer = quersumme();

    for(int i=0; i<17; i++){
        printf("Quersumme %d  : %d\n", i, *(quer + i));
    }
    return 0;
}
