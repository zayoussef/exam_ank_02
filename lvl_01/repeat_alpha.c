#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int j = 0;
        while (av[1][i])
        {
            j = 0;
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                j = av[1][i] - 64;
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
                j = av[1][i] - 96;
            else
                j = 1;
            while (j--)
                write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}
