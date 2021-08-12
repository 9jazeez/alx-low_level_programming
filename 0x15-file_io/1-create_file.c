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
	ssize_t e;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1 || filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		write(fd, "", 1);
	}
	else
	{

		for (n = 0; *f != '\0'; n++)
			f++;

		e = write(fd, text_content, n);
		if (e == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}


