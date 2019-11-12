#include "holberton.h"
/**
 * append_text_to_file - append text
 *Description: function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: is a NULL terminated string to append to the file
 * Return:1succes -1failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr = 0, len;

	if (filename == NULL)
		return (-1);

/*func open with O_CREAT as parameter creates the file if it doesnt exist and*/
/* return file descriptor*/
/*O_RDWR read and write permissions*/
/*O_TRUNC if file exists and allow write it will be truncated to length 0*/
/*600 rw permission for owner. Group and all have no permission*/
	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
/*Copy text_content in the file created*/
		wr = write(fd, text_content, len);

		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
