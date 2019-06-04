#include <stdio.h>

int* fuelleArray() {
    static int feld[10];
    for(int i=0; i<sizeof(feld)/sizeof(int); i++){
        feld[i] = i+1;
    }
    return feld;
}

int main(){
    int* feld = fuelleArray();
    printf("%d, %d, %d, %d", *feld, *(feld+1), *(feld+2), *(feld+3));

    return 0;
}
