#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
    if (filename == NULL)
        return -1;

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return -1;

    if (text_content != NULL)
    {
        ssize_t len = strlen(text_content);
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
