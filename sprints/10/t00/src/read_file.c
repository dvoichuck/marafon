#include "header.h"

int main(int argc, char *argv[]) {
    char ch;
    int fd;

    if (argc > 2) {
        write(2, "error\n", 6);
        return -1;
    }
    if (argc < 2) {
        write(2, "usage: ./read_file [file_path]\n", 31);
        return -1;
    }
    fd = open(argv[1], O_RDONLY);
    if (fd) 
        while (read(fd, &ch, 1) > 0)
            write(1, &ch, 1);
    else {
        write(2, "error\n", 6);
        return -1;
    }
    close (fd);
}

