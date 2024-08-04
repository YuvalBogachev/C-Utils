#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void invalid_vectors() {
    float data[] = {1, 2, 3};
    float* ret;

    ret = fp_vector(data, 3, -1);
    if (ret != NULL) { printf("FAILED! Vector test 1 on invalid vectors.\n"); }
    else { printf("PASSED! Vector test 1 on invalid vectors.\n"); }

    ret = fp_vector(data, -1, 3);
    if (ret != NULL) { printf("FAILED! Vector test 2 on invalid vectors.\n"); }
    else { printf("PASSED! Vector test 2 on invalid vectors.\n"); }

    ret = fp_vector(data, 3, 2);
    if (ret != NULL) { printf("FAILED! Vector test 3 on invalid vectors.\n"); }
    else { printf("PASSED! Vector test 3 on invalid vectors.\n"); }

    ret = fp_vector(data, 3, 4);
    if (ret != NULL) { printf("FAILED! Vector test 4 on invalid vectors.\n"); }
    else { printf("PASSED! Vector test 4 on invalid vectors.\n"); }
}

int main() {
    invalid_vectors();
}