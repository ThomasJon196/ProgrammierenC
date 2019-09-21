#include <stdio.h>

multiply(int* A, int* B, int* C, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
               *(C+(n*i)+(j)) += *(A+(n*i)+(k)) * *(B+(n*k)+(j));
            }
        }
    }

    //C[i][j] += A[i][k] * B[k][j];
    return 0;
}



int main(){
    int a[2][2] = {{0, 1}, {2, 3}};
    int b[2][2] = {{0, 1}, {2, 3}};
    int c[2][2] = {{0, 0}, {0, 0}};
    int* x = c;
    multiply(&a, &b, &c, 2);
    printf("%d", *(x));
    printf("%d", *(x+1));
    printf("%d", *(x+2));
    printf("%d", *(x+3));
}
