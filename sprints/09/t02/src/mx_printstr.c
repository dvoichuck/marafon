#include "minilibmx.h"

void mx_printstr(const char *s) {
    for (; *s != '\0'; s++) 
        write(1, s, 1);
}
