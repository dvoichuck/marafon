#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *dst = NULL;

    if (src == NULL || size <= 0)
        return NULL;
    dst = (int *)malloc (sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
    return dst;
}
