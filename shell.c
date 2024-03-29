#include "shell.h"
/**
 * main - Entry point
 * @ac: number of arguments
 * @argv: the arguments
 */
int main(int ac, char **argv)
{
    char *line = NULL, **command = NULL;
    int status = 0, idx = 0;
    (void)ac;
    while (1)
    {
        line = read_line();
        if (line == NULL)
        {
            if (isatty(STDIN_FILENO))
            {
                write(STDOUT_FILENO, "\n", 1);
            }
            return (status);
        }
        idx++;
        command = tokenizer(line);
        if (command == NULL)
            continue;
        if (is_built(command) == 1)
            handle_built(command, &status);
        else
            status = _execute(command, argv, idx);
    }
}
