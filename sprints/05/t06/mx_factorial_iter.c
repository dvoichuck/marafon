int mx_factorial_iter(int n) {
    int sum = 1;
    
    if (n >= 0) {
        for (; n > 1; n--) 
            sum *= n;
        return sum;
    }
    if (n < 0)
        return n;
    return 0;
}
#include <stdio.h>
int main() {
    printf("%d", mx_factorial_iter(20));
}
