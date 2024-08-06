#include <stdio.h>
#include <stdlib.h>

float* fp_vector(float data[], int len, int n) {
    if (n <= 0) {
        printf("Vector dimensnion cannot be smaller than 1!\n");
        return NULL;
    }

    if (len != n) {
        printf("Mismatch between data and vector legnth!\n");
        return NULL;
    }

    float* vector = (float*)malloc(n * sizeof(float));
    for (int i = 0; i < len; i++) {
        vector[i] = data[i]; 
    }

    return vector;
}

float inner_product(float* vec1, int len1, float* vec2, int len2, int* error) {
    if (len1 != len2) {
        printf("Vectors must be of matching lengths!\n");
        *error = -1;
        return 0;
    }

    float ip = 0;

    for (int i = 0; i < len1; i++) {
        ip += (vec1[i] * vec2[i]);
    }

    *error = 0;
    return ip;
}