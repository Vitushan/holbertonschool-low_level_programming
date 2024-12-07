#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content)
{
    if (filename == NULL)
        return -1;

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return -1;

    if (text_content != NULL)
    {
        ssize_t len = 0;
        while (text_content[len])
            len++;
        ssize_t bytes_written = write(fd, text_content, len);
        if (bytes_written == -1 || bytes_written != len)
        {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
