#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_error - Affiche un message d'erreur sur STDERR et quitte avec un code
 * @message: Le message à afficher
 * @filename: Le fichier associé au message d'erreur
 * @exit_code: Le code de sortie à utiliser
 */
void print_error(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
	exit(exit_code);
}

/**
 * main - Copie le contenu d'un fichier dans un autre
 * @argc: Le nombre d'arguments
 * @argv: Les arguments passés au programme
 * Return: 0 en cas de succès, sinon un code d'erreur spécifique
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Can't write to", argv[2], 99);
	}


	do {
		rd = read(fd_from, buffer, 1024);
		if (rd == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error("Can't read from file", argv[1], 98);
		}

		wr = write(fd_to, buffer, rd);
		if (wr == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error("Can't write to", argv[2], 99);
		}
	} while (rd > 0);

	if (close(fd_from) == -1)
		print_error("Can't close fd", argv[1], 100);

	if (close(fd_to) == -1)
		print_error("Can't close fd", argv[2], 100);

	return (0);
}
