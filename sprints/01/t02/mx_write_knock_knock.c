#include <unistd.h>
#include <string.h>

void mx_write_knock_knock() {
    char *string;
    
    string = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    write(1, string, strlen(string));
}
