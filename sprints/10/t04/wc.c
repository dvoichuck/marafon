#include "header.h"

int main(int argc, char *argv[]) {
    int rd;
    char ch;
    int line = 0;
    int words = 0;
    int simvol = 0;
    int all_simvol = 0;
    int all_line = 0;
    int all_words = 0;
    char buf[1024];
    char *str = NULL;

    if (argc == 1) {
        while(read(0, &buf, sizeof(buf))) {
            str = mx_strjoin(str, buf);
            line++;
            for (int f = 0; str[f] != '\0'; f++) {
                if(str[f] > 8 && str[f] < 14)
                    str[f] = ' ';
                }
            words = mx_count_words(str, ' ');
        }
        simvol = mx_strlen(str);
        mx_printchar('\t');
        mx_printint(line);
        mx_printchar('\t');
        mx_printint(words);
        mx_printchar('\t');
        mx_printint(simvol);
        mx_printchar('\n');   
    }    
    else {    
        for (int i = 1; i < argc; i++) {
            rd = open(argv[i], O_RDONLY);
            while (read(rd, &ch, 1)) {
                if (rd < 0) {
                    write(2, "mx_wc: ", 7);
                    write(2, argv[i], mx_strlen(argv[i]));
                    write(2, ": open: No such file or directory\n", 34);
                    return -1;
                }
                if (ch == '\n') 
                    line++;
                str = mx_file_to_str(argv[i]);
                for (int j = 0; str[j] != '\0'; j++) {
                    if(str[j] > 8 && str[j] < 14)
                        str[j] = ' ';
                }
                words = mx_count_words(str, ' ');
                simvol++;
            }
            all_simvol += simvol;
            all_line += line;
            all_words += words;
            mx_printchar('\t');
            mx_printint(line);
            line = 0;
            mx_printchar('\t');
            mx_printint(words);
            mx_printchar('\t');
            mx_printint(simvol);
            simvol = 0;
            mx_printchar(' ');
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
        mx_printchar('\t');
        mx_printint(all_line);
        mx_printchar('\t');
        mx_printint(all_words);
        mx_printchar('\t');
        mx_printint(all_simvol);
        mx_printchar(' ');
        mx_printstr("total");
        mx_printchar('\n');
    }
}
