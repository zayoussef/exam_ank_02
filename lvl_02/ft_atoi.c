#include <stdio.h>

int     ft_atoi(const char *str)
{
    int i = 0;
    int sg = 1;
    int rs = 0;
    
    while (str[i] && str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        sg = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        rs = rs * 10 + (str[i] - 48);
        i++;
    }
    return (rs * sg);
}

int main ()
{
    char d[] = "    -00000000000000009";
    printf("%d", ft_atoi(d));
}