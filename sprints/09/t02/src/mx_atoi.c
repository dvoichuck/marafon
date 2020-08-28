#include "minilibmx.h"

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int i = 0;
    int num = 0;
    int sing = 1;
    int count = 0;

    if ((str[i] == '+' || str[i] == '-') && mx_isdigit(str[i + 1])) {
        if (str[i] == '-')
            sing = -1;
        i++;
    }
    while (mx_isdigit(str[i])) {
        num = num * 10 + (str[i] - 48);
        i++;
        count++;
    }
    if (str[i])
        return 0;
    return num * sing;   
}
