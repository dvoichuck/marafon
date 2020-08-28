#include <time.h>

double mx_timer(void (*f)()) {
    double start;
    double finish;

    start = clock();
    f();
    finish = clock();
    if ((finish - start) > 0)
        return finish - start;
    return -1;
}
