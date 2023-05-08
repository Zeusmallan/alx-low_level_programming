#include <stdio.h>
#include "main.h"
/**
 * create_file - Function that creates a file and writes a string into it.
 * @filename: Name of the file.
 * @text_content: A string of characters to be addes to the file.
 * Return: 1 if this functions works fine and -1 if otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int file_ptr;
	int size = 0;
	int display;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	else
	{
		while (text_content[size] != '\0')
		{
			size++;
		}
		file_ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (file_ptr == -1)
		{
			return (-1);
		}
		display = write(file_ptr, text_content, size);
		if (display == -1)
		{
			return (-1);
		}
		close(file_ptr);
	}
	return (1);
}
