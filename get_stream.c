#include "monty.h"

/**
 * get_stream_fail - Handles the error
 * when reading a file fails
 * @filename: The name of the file to be open
*/

void get_stream_fail(char *fileName)
{
    dprintf(2, "Error: Can't open file %s\n", fileName);
    free_arguments();
    exit(EXIT_FAILURE);
}
void get_stream(char *fileName)
{
    int fd;

    fd = open(fileName, O_RDONLY);
    if (fd == -1)
        get_stream_fail(fileName);

    arguments->stream == fdopen(fd, "r");
    if (arguments->stream == NULL)
    {
        close(fd);
        get_stream_fail(fileName);
    }
}