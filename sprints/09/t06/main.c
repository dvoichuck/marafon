double mx_timer(void (*f)());

void f() {
    int i = 0; 
    
    while (i < 50000000)
        i++;
}
#include <stdio.h>
int main() {
    printf("%f", mx_timer(f));
}
