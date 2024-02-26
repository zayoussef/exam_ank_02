
#include <unistd.h>

void wdmatch (char *s1, char *s2)
{
    int i = 0;
    int len = 0;
    while (s1[len])
        len++;
    while (*s2 && i < len)
    {
        if (*s2 == s1[i])
            i++;
        s2++;
    }
    if (i == len)
        write (1, s1, i);
    write (1, "\n", 1);
}

int main (int ac, char **av)
{
    if (ac == 3)
        wdmatch(av[1], av[2]);
    else 
        write (1, "\n", 1);
}