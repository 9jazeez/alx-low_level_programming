#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - A fuinction that reads and print content of a file.
 * @filename: Pointer to file
 * @letters: Amount of data to print.
 *
 * Return: Size of data that can be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i;
	char *buff;
	char *f = NULL;
	ssize_t n;

	i = 0;
	fd = open(filename, O_RDONLY, 00600);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	read(fd, buff, letters);
	buff[letters] = '\0';

	close(fd);

	f = buff;
	for (i = 0; *f != '\0'; i++)
	{
		n = write(2, f, 1);
		if (n == -1)
			return (0);
		f++;
	}
	free(buff);

	return (i);
}


