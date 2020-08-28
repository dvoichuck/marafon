#include <stdbool.h>

bool mx_isupper(int c);
bool mx_islower(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s) {
    int count = 0;

    while(s[count]) {
        if (mx_islower(s[count]))
            s[count] = mx_toupper(s[count]);
        else 
            s[count] = mx_tolower(s[count]);
        count++;
    }
}
