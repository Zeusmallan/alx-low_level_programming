#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Function that reads a .txt file and
 * writes its contents to stdout.
 * @filename: Name of the file to read from.
 * @letters: The number of bytes or size of the string (letters in the file).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_ptr;
	ssize_t size;
	ssize_t display;

	file_ptr = open(filename, O_RDONLY);
	if (file_ptr == 0)
	{
		return (0);
	}
	else
	{
		if (file_ptr != 0)
		{
			buffer = malloc(sizeof(char) * letters);
			if (buffer == 0)
			{
				return (0);
			}
			size = read(file_ptr, buffer, letters);
			display = write(STDOUT_FILENO, buffer, size);
			if (display == 0)
			{
				return (0);
			}
			free (buffer);
			close(file_ptr);
		}
	}
	return (display);
}
