#pragma once

#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int mx_count_words(const char *str, char delimiter);
bool mx_isspace(char c);
int mx_strlen(const char *s);
void mx_printint(int n);
void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_file_to_str(const char *filename);
