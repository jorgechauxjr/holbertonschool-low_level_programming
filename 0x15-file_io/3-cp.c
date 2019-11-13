#include "holberton.h"
#include <stdio.h>
/**
 * errorMsg - Print error message
 * @exitCode: exit code to stop
 * @format: data
 * @s: data
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
	int fd_from, fd_to, rd_stat, wr_stat;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(argv[1],O_RDONLY);

	if (fd_from == -1)
		errorMsg(98, "Error: Can't write to", argv[2]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);



}
