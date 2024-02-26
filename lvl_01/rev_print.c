#include <unistd.h>

int len(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int l = len(av[1]);
        while (l--)
            write(1, &av[1][l], 1);
    }
    write (1, "\n", 1);
}