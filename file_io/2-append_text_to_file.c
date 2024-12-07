#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier
 * @filename: Nom du fichier
 * @text_content: Texte à ajouter
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
