#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
* create_file - Crée un fichier et écrit du contenu dedans.
* @filename: Le nom du fichier à créer.
* @text_content: Le contenu à écrire dans le fichier,
* ou NULL pour un fichier vide.
* Return: 1 en cas de succès, -1 en cas d'échec.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t bytes_written;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;

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
