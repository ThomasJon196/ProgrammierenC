#include <stdio.h>

int* einsBisZehn(){
    static int feld[10];
    int i = sizeof(feld)/sizeof(int);
    while(i>0){
        i--;
        feld[10-i] = 20-i;
    }
    return &feld;
}



int main(){
    int* feld = einsBisZehn();

    printf("%d", *(feld+1));

    return 0;
}
