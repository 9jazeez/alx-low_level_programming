#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * cp_file - A fuinction that copies to a already created file or new file.
 * @file_from: Pointer to file
 * @file_to: Copied to file.
 *
 * Return: Size of data that can be printed
 */

int cp_file(const char *file_from, const char *file_to)
{
	int fd1;
	int fd2;
	int n1, n2;
	ssize_t n = 1024;
	char buff[1024];

	fd1 = open(file_from, O_RDWR, 00777);
	if (fd1 == -1 || file_from == NULL)
	{
		return (-1);
	}

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd2 == -1 || file_to == NULL)
	{
		return (-1);
	}

	n = read(fd1, buff, n);
	buff[n] = '\0';
	write(fd2, buff, n);

	n1 = close(fd1);
	n2 = close(fd2);
	if (n1 == -1 || n2 == -1)
	{
		dprintf(2, "ERROR: Can't close fd1: %d fd2: %d\n", fd1, fd2);
		exit(100);
	}

	return (1);
}

/**
 * main - TO test copy function
 * @argc: Number of arguments
 * @argv: Arrays of argument
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int n;

	if (argc < 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else
	{
		n = cp_file(argv[1], argv[2]);
		if (n == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	return (0);
}


