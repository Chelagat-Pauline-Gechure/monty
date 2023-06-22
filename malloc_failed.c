#include "monty.h"
/**
 * malloc_fail -nHandle the error when Malloc fails to allocate memory.
*/

void malloc_failed(void)
{
    dprintf(2, "Error: malloc failed");
    free_arguments();
    exit(EXIT_FAILURE);
}