#include <unistd.h>

int match(char *s, char c, int len)
{
    int i = 0;
    while (s[i] && i < len || len == -1)
        if (s[i++] == c)
            return 1;
    return 0;
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        while (av[1][i])
        {
            if (!match(av[1], av[1][i], i) && match(av[2], av[1][i], -1))
                write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}

