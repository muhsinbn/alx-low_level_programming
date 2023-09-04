#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");
	if  (filename == NULL)
	{
		return (0);
	}

	char *buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten < 0 || (size_t)bytesWritten != typesRead)
	{
		return (0);

		return (bytesRead);
	}

