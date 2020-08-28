#include <stdbool.h>
#include <stdio.h>

void mx_sort(int *arr, int size, bool (*f)(int, int));

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};

   
    mx_sort(arr, 5, compare);
    printf("%d\t, %d\t, %d\t, %d\t, %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
}
