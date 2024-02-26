
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int space = 0;

    if (argc > 1 && argv[1][0])
    {
        // Skip the leading spaces
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        // Save the index of the first word
        j = i;
        // Find the end of the first word
        while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            i++;
        // Skip the spaces after the first word
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        // Print the rest of the string, replacing multiple spaces with one
        while (argv[1][i])
        {
            if (argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                // If the previous character was a space, print one space
                if (space)
                    write(1, " ", 1);
                // Print the current character
                write(1, &argv[1][i], 1);
                // Reset the space flag
                space = 0;
            }
            else
            {
                // Set the space flag
                space = 1;
            }
            i++;
        }
        // Print a space before the first word
        write(1, " ", 1);
        // Print the first word
        while (argv[1][j] && argv[1][j] != ' ' && argv[1][j] != '\t')
        {
            write(1, &argv[1][j], 1);
            j++;
        }
    }
    // Print a newline
    write(1, "\n", 1);
    return (0);
}