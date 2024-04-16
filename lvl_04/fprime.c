#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 2;
        int nbr = atoi(av[1]);
        if (nbr == 1)
            return (printf("1\n"), 0);
        while (i <= nbr)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                nbr /= i;
                if (nbr == 1)
                    break;
                printf("*");
            }
            else
                i++;
        }
    }
    printf ("\n");
}
