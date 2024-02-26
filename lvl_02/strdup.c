#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    char *s = (char *)malloc(sizeof(char) * (i + 1));
    if (!s)
        return NULL;
    i = 0;
    while (src[i])
    {
        s[i] = src[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}

int main ()
{
    char str[] = "youssef";
    printf("%s\n", str);
    char *rs = ft_strdup(str);
    printf("-->%s\n", rs);
    free(rs);
}