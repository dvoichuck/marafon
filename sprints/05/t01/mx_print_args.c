void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

int main(int argv, char *args[]) {
    for (int i = 1;  i < argv; i++) {
        mx_printstr(args[i]);
        mx_printchar('\n');
    }
}
