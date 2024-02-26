#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int len = abs((start - end) + 1);
    int *rs = (int *)malloc(sizeof(int) * len);
    while (i < end)
    {
        if (start < end)
        {
            rs[i] = start;
            start++;
            i++;
        }
        else
        {
            rs[i] = start;
            start--;
            i++;   
        }
    }
    return rs;
}
#include <stdio.h>
int main ()
{
    int *rs = ft_range(-2147483648, 3);
    if (rs)
    {
        int i = 0;

        {
            printf("%d\n", rs[i]);
            i++;
        }
    }

}