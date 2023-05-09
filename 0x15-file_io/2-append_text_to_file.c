#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - Function that adds elements or
 * characters to already existing charaters in a file.
 * @filename: Pointer to the file to append.
 * @text_content: Text to be appended to the file.
 * Return: 1 when successful and -1 unsuccessful.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file;
	int written_bytes;
	int size = 0;

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
		open_file = open(filename, O_WRONLY | O_APPEND);
		if (open_file == -1)
		{
			return (-1);
		}
		written_bytes = write(open_file, text_content, size);
		if (written_bytes == -1)
		{
			return (-1);
		}
		close(open_file);
	}
	return (1);
}

