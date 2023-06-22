#include "monty.h"

/**
 * initialize_args - Initialize pointer to arg_s structure.
*/

void initialize_args()
{
    arguments = malloc(sizeof(arg_t));
    if (arguments == NULL)
        malloc_fail();
    arguments->stream = NULL;
    arguments->line = NULL;
}