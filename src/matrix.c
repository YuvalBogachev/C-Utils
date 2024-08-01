#include <stdio.h>
#include <stdlib.h>

float* fp_matrix(float data, int n, int m) {
    if ((n <= 0) || (m <= 0)) {
        printf("Matrix dimesnion cannot be smaller than 1!\n");
        return NULL;
    }

    float* matrix = malloc(n * m * sizeof(float));
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            
        } 
    }
}

int main() {
    fp_matrix(1, 1 , 3);    
}
