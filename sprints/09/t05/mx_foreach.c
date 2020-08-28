void mx_printint(int n);
void mx_printchar(char c);

void mx_foreach(const int *arr, int size, void (*f)(int)) {
    for (int i = 0; i < size; i++)
        f(arr[i]);
}
