#include <unistd.h>

int ft_atoi(char *s)
{
    int rs = 0;
    while (*s)
    {
        rs = rs * 10 + (*s - 48);
        s++;
    }
    return rs;
}

int is_prime(int nb)
{
    int i = 2;
    if (nb <= 1)
        return 0;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void putnbr(int nb)
{
    if (nb >= 10)
        putnbr(nb / 10);
    int d = nb % 10 + 48;
    write (1, &d, 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int nbr = ft_atoi(av[1]);
        int sum = 0;
        while (nbr > 0)
        {
            if (is_prime(nbr))
                sum += nbr;
            nbr--;
        }
        putnbr(sum);
    }
    write (1, "\n", 1);
}