//#include <stdio.h>
double mx_pow(double n, unsigned int pow) {
    double i = 1;

    if (pow != 0) {
        while (pow != 0) {
            i *= n;
            pow--;
        }
    }
    return i;
}

/*
int main() {
    printf("%f", mx_pow(3, 3));
}*/
