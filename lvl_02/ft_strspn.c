#include <stddef.h>

char *strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return (char *)s;
        s++;
    }
    return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while (s[i])
    {
        if (strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return (i);
}

#include <stdio.h>

int main()
{
    const char *s = "abcdefg";
    const char *accept = "abc";
    
    printf("Input string: %s\n", s);
    printf("Accept string: %s\n", accept);
    
    size_t length = ft_strspn(s, accept);
    printf("Length of initial segment: %zu\n", length);

    return 0;
}