#include <unistd.h>

void putnbr(int nb)
{
    if (nb >= 10)
        putnbr(nb / 10);
    int f = nb % 10 + 48;
    write (1, &f, 1);
}

int main (int ac, char **av)
{
    (void)av;
    putnbr(ac - 1);
    write (1, "\n", 1);
}