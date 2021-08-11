#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * create_file - A fuinction that create and print content of a file.
 * @filename: Pointer to file
 * @text_content: Amount of data to print.
 *
 * Return: Size of data that can be printed
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *f = text_content;
	int n;

	fd = open(filename, O_CREAT | O_RDWR, 00700);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}

	for (n = 0; *f != '\0'; n++)
		f++;
	write(fd, text_content, n);

	close(fd);

	return (1);
}


