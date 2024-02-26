#include <unistd.h>

void putnbr(int nb)
{
    if (nb >= 10)
        putnbr(nb / 10);
    char i = nb % 10 + 48;
    write (1, &i, 1);
}

int main (int ac, char *av[])
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuz", 8);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else
            putnbr(i);
        write(1, "\n", 1);
        i++;
    }
}