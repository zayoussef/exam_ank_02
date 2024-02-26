void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
#include <stdio.h>
int main ()
{
    int a = 10;
    int b = 2;
    ft_swap(&a, &b);
    printf("-->%d\n-->%d", a, b);
}