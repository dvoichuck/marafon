#include "get_address.h"

static int mx_len(unsigned long nbr) {
    int len = 0;
    
    while (nbr != 0) {
        nbr /= 16;
        len++;
    }
    return len;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    unsigned long n;
    int len = mx_len(nbr);
    char *new;

    if (nbr == 0) {
        new = mx_strnew(1);
        new[0] = '0';
        return new;
    }
    new = mx_strnew(len);
    for (int i = len - 1; i >= 0; i--) {
        n = nbr % 16;
        if (n > 9) 
            new[i] = n + 87;
        if (n < 10) 
            new[i] = n + 48;
        nbr /= 16;
    }
    return new;
}
