#include <stdio.h>

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return c;
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int rs = 0;
    int sg = 1;
    int digit;
    while (str[i] && str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        sg = -1;
        i++;
    }
    while (str[i])
    {
        char c = to_lower(str[i]);
        if (c >= '0' && c <= '9')
            digit = c - 48;
        else if (c >= 'a' && c <= 'f')
            digit = c - 'a' + 10;
        else
            break;
        rs = rs * str_base + digit;
        i++;
    }
    return (rs * sg);
}

int main()
{
    const char *str = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.";
    int base = 16;
    int result = ft_atoi_base(str, base);
    printf("Result: %d\n", result);
    return 0;
}
