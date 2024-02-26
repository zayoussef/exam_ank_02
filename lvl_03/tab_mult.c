#include <unistd.h>

int ft_atoi(char *s)
{
    int i = 0;
    int rs = 0;
    int sg = 1;
    while (s[i] && s[i] <= 32)
        i++;
    if (s[i] == '-')
    {
        sg = -1;
        i++;
    }
    else if (s[i] == '+')
        i++;
    while (s[i] && s[i] >= '0' && s[i] <= '9')
    {
        rs = rs * 10 + (s[i] - 48);
        i++;
    }
    return (rs * sg);
}

void putstr(char c)
{
    write(1, &c, 1);
}
void putnbr(int nbr)
{
    long nb;
    nb = (long)nbr;
    if (nb < 0)
    {
        putstr('-');
        nb = -nb;
    }
    if (nb >= 10)
        putnbr(nb / 10);
    putstr(nb % 10 + '0');
}

int main (int ac, char **av)
{
   if (ac != 2)
    write(1, "\n", 1);
    else
    {
        int i = 1;
        int nbr = ft_atoi(av[1]);
        while (i <= 9)
        {
            putnbr(i);
            write (1, " x ", 3);
            putnbr(nbr);
            write(1, " = ", 3);
            putnbr(i * nbr);
            write (1, "\n", 1);
            i++;
        }
    } 
}