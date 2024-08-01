#include <stdio.h>
#include <stdlib.h>

float* fp_vector(float[] data, int n) {
    if (n <= 0) {
        printf("Vector dimesnion cannot be smaller than 1!\n");
        return NULL;
    }

    if 

    float* vector = (float*)malloc(n * sizeof(float));
    for (int i=0; i < n; i++) {
        vector[i] = data[i]; 
    }

    return vector;
}

int main() {
    fp_matrix(1, 1 , 3);    
}
