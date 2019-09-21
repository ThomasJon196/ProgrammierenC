#include <stdio.h>

int main(int argc, char *argv[]){

    for(int n=0; n<argc; n++){
        printf("%d: %s\n", n, argv[n]);
    }
}
