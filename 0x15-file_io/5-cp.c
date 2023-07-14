#include "main.h"

void error_msg(int x, const char *msg, int ext_code)
{
    if (x == -1)
    {
        perror(msg);
        exit(ext_code);
    }
}

int main(int argc, char **argv)
{
    int c, w, r;
    int fd1, fd2;
    char buffer[1024];

    if (argc != 3)
    {
        fprintf(stderr, "cp file_from file_to\n");
        exit(97);
    }
    fd1 = open(argv[1], O_RDONLY);
    error_msg(fd1, "Error: Can't read the file\n", 98);
    fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    error_msg(fd2, "Error: Can't write to file_to\n", 99);
    while ((r = read(fd1, buffer, sizeof(buffer))) > 0)
    {
        w = write(fd2, buffer, r);
        error_msg(w, "Error: Can't write to file_to\n", 99);
    }
    c = close(fd1);
    error_msg(c, "Error: Can't close fd fd1\n", 100);
    c = close(fd2);
    error_msg(c, "Error: Can't close fd fd2\n", 100);
    return (0);
}
