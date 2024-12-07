#include <fcntl.h>
#include <unistd.h>

int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t len, bytes_written;

    if (filename == NULL)
        return -1;

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return -1;

    if (text_content != NULL)
    {
        for (len = 0; text_content[len]; len++)
            ;

        bytes_written = write(fd, text_content, len);
        if (bytes_written == -1 || bytes_written != len)
        {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
