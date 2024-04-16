#include <unistd.h>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 0;
        int j = 0;
        int space = 0;

        while (av[1][i] && av[1][i] <= 32)
            i++;
        j = i;
        while (av[1][i] && av[1][i] > 32)
            i++;
        while (av[1][i] && av[1][i] <= 32)
            i++;
        int spa = av[1][i];
        while (av[1][i])
        {
            if (av[1][i] > 32)
            {
                if (space)
                    write (1, " ", 1);
                write (1, &av[1][i], 1);
                space = 0;
            }
            else
                space = 1;
            i++;
        }
        if (spa)
            write (1, " ", 1);
        while (av[1][j] && av[1][j] > 32)
        {
            write (1, &av[1][j], 1);
            j++;
        }
    }
    write (1, "\n", 1);
}
