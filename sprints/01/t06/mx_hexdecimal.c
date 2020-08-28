void mx_printchar(char c);

void mx_hexadecimal(void) {
    for(char i = 48; i < 58; i++)  
        mx_printchar(i);
    for(char i = 65; i < 71; i++)  
        mx_printchar(i);
    mx_printchar('\n');
}
