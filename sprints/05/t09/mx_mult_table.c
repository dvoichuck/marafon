#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_strlen(const char *s);

int main (int agvc, char *argv[]) {
    if (agvc == 3) {
        int a = mx_atoi(argv[1]);
        int b = mx_atoi(argv[2]);
        
        if (a >= 1 && b >= 1) {
            for (int i = a; i <= b; i++) {
                for (int j = a; j <= b; j++){
                    mx_printint(i * j);
                    if (j != b)
                        mx_printchar('\t');
                }
                mx_printchar('\n');
            }
        }
    }
    return 0;
}   

