#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int length(int arr[], char* type) {
    void* type_p;
    void* arr_end;
    void* arr_beg;
    if (strcmp(type, "int") == 0) {type_p = (int *)type_p; arr_beg = (int *)arr; arr_end = (int *)(&arr_beg + 1) - 1;}
    else if (strcmp(type, "float") == 0) {type_p = (float *)type_p; arr_beg = (float *)arr; arr_end = (float *)(&arr_beg + 1) - 1;}
    else if (strcmp(type, "double") == 0) {type_p = (double *)type_p; arr_beg = (double *)arr; arr_end = (double *)(&arr_beg + 1) - 1;}
    else if (strcmp(type, "bool ") == 0) {type_p = (bool *)type_p; arr_beg = (bool *)arr; arr_end = (bool *)(&arr_beg + 1) - 1;}
    else if (strcmp(type, "char") == 0) {type_p = (char *)type_p; arr_beg = (char *)arr; arr_end = (char *)(&arr_beg + 1) - 1;}
    else {
        printf("Provide a (lower case) type for the function!\n");
        return -1;  
    }
    //printf("%d", sizeof(arr));
    //printf("%d", sizeof(type_p));
    //return sizeof(&arr) / sizeof(type_p);
    return sizeof(arr) / sizeof(arr[0]);
    //return sizeof(arr_end - arr_beg) / sizeof(type_p);
}

int main() {
    int arr[] = {1, 2, 3};
    printf("The array length is %d\n", length(arr, "int"));
}