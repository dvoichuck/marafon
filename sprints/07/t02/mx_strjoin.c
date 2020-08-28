#include <stdio.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
void mx_strdel(char **str);

char *mx_strjoin(char const *s1, char const *s2) {
    char *join;

    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 == NULL)
        return mx_strdup(s2);
    else if (s2 == NULL)
        return mx_strdup(s1);
    else {
        join = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        join = mx_strcat(mx_strcpy(join, s1), s2);
        return join;
    }
}
