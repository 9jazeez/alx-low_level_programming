#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * append_text_to_file - A fuinction that appends to a already created file.
 * @filename: Pointer to file
 * @text_content: Amount of data to print.
 *
 * Return: Size of data that can be printed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *f = text_content;
	int n;

	fd = open(filename, O_APPEND | O_RDWR, 00777);
	if (fd == -1 || filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);

		return (1);
	}

	else
	{
		for (n = 0; *f != '\0'; n++)
			f++;
		write(fd, text_content, n);
	}

	close(fd);

	return (1);
}


