// #include <stdio.h>
//
void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s) {
    int length = mx_strlen(s) - 1;
    int i = 0;
    
    if(s == 0)
        return;
    while(length > i) {
        mx_swap_char(&s[i], &s[length]);
        i++;
        length--;
    }
}

/*
int main() {
    char str[] = "game";
    printf("%s\n", str);
    mx_str_reverse(str);
    printf("%s\n", str);
}*/
