#include "monty.h"

/**
 * get_stream_fail - Handles the error
 * when reading a file fails
 * @filename: The name of the file to be open
*/

void getting_stream_failed(char *fileName)
{
    dprintf(stderr, "Error: Can't open file %s\n", fileName);
    free_arguments();
    exit(EXIT_FAILURE);
}
void get_stream(char *fileName)
{
    int fd;

    fd = open(fileName, O_RDONLY);
    if (fd == -1)
        getting_stream_failed(fileName);

    arguments->stream == fdopen(fd, "r");
    if (arguments->stream == NULL)
    {
        close(fd);
        getting_stream_failed(fileName);
    }
}