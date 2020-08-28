#include <header.h>

int main(int argc, char *argv[]) {
    char ch;
    int rd;
    int wd;
    
    if (argc < 3) {
        write(2, "usage: ./mx_cp [source_file] [destination_file]\n", 48);
        return -1;
    }
    rd = open(argv[1], O_RDONLY);
    if (rd < 0) {
        write(2, "mx_cp: ", 7);
        write(2, argv[1], mx_strlen(argv[1]));
        write(2, ": No such file or directory\n", 29);
        return -1;
    }
    wd = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
    while (read(rd, &ch, 1) > 0)
        write(wd, &ch, 1);
    close(rd);
    close(wd);
}
