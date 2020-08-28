void mx_printint(int n);
void mx_printchar(char c);

void mx_foreach(const int *arr, int size, void (*f)(int));

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    mx_foreach(arr, 5, mx_printint);
}
