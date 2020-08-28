#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int i = 0;
    int left = *count;
    int right = size;

    while (left <= right) {
        i = ((left + right) / 2);
        if (mx_strcmp(arr[i], s) > 0)
            right = i + 1;
        if (mx_strcmp(arr[i], s) < 0)
            left = i - 1;
        if (mx_strcmp(arr[i], s) == 0)
            return i;
        (*count)++;
    }
    (*count) = 0;
    return -1;
}
