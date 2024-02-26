#include <unistd.h>

int match (char *s, char c, int len)
{
    int i = 0;
    while (i < len)
    {
        if (s[i] == c)
            return 0;
        i++;
    }
    return 1;
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        while (av[1][i])
            i++;
        while (av[2][j])
        {
            av[1][i] = av[2][j];
            j++;
            i++;
        }
        av[1][i] = '\0';
        int k = 0;
        while (k < i)
        {
            if (match (av[1], av[1][k], k))
                write (1, &av[1][k], 1);
            k++;
        }
    }
    write (1, "\n", 1);
}