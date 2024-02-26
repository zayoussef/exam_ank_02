#include <stdlib.h>
#include <limits.h>

char *ft_itoi(int nbr)
{
    if(nbr == -2147483648)
		return("-2147483648\0");
    int nb = nbr;
    int len = 0;
    if (nb <= 0)
        len++;
    while (nb)
    {
        nb = nb / 10;
        len++;
    }   
    char *rs = malloc(sizeof(char) * (len + 1));
    rs[len] = '\0';
    if (nb == 0)
    {
        rs[0] = '0';
        return rs;
    }
    while (nbr)
    {
        rs[--len] = nb % 10 + 48;
        nb = nb / 10;
    }
    return rs;
}