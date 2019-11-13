#include "holberton.h"
#include <stdio.h>
/**
 * errorMsg - Print error message
 * @exitCode: exit code to stop
 * @msg: the error message to be printed
 * @fileName: the name of the file
 */
void errorMsg(int exitCode, const char *msg, const char *fileName)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, fileName);
	exit(exitCode);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of argument tokens
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, rd, wr, bz = 1024, cl_from, cl_to;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		errorMsg(98, "Error: Can't read from file", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
		errorMsg(99, "Error: Can't write to", argv[2]);

	for (rd = read(fd_from, buf, bz); rd > 0; rd = read(fd_from, buf, bz))
	{
		wr = write(fd_to, buf, rd);
		if (wr == -1)
			errorMsg(99, "Error: Can't write to", argv[2]);
	}
	if (rd == -1)
		errorMsg(98, "Error: Can't read from file", argv[1]);

	cl_from = close(fd_from);

	if (cl_from == -1)
		errorMsg(100, "Error: Can't close fd", argv[1]);

	cl_to = close(fd_to);

	if (cl_to == -1)
		errorMsg(100, "Error: Can't close fd", argv[2]);

	return (0);
}
