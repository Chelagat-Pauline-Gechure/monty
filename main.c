#include "monty.h"

arg_t *arguments = NULL;
/**
 * main - Entry point
 * argc: The number of command-line arguments
 * argv: A pointer to an of strings containing
 * command line arguments
 * 
 * Description: print alphabet in lowercase using the putchar
 * 
 * Return: returns 0 (Success)
*/

int main(int argc, char **argv)
{
    size_t n = 0;
    (void)argv;

    validate_arguments(argc);
    initialize_arguments();
    get_stream(argv[1]);

    while (getline(&arguments->line, &n, arguments->stream != -1))
    {
        printf("%s", arguments->line);
    }
    free_arguments();

    return (0);
}