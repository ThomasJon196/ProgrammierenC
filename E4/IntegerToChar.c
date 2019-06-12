#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* toBinaryString(int x){
    int count = 0;
    unsigned int twoPowers = 2147483648; // max positive int number
    for(int i=32; i>=0; i--){
        if(x / twoPowers != 0){
            count = i;
            break;
        }
        twoPowers = twoPowers>>1;
    }

    char binaryString[count+1];

    count = 0;

    while(x != 0){
        binaryString[count] = x & 0x01;
        count++;
        x = x >> 1;
        printf("%d", x & 0x01);
    }
    binaryString[count] = '\0';
    printf("%s", binaryString);
    //char* binaryString = tempString;

    return &binaryString;
}

int main(){
    char* binaryString = toBinaryString(5);
    printf("%s", binaryString);

    return 0;
}
