#include <stdlib.h>
#include "lst.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    int swap;
    t_list *tmp ;
    tmp = lst;
    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            tmp = lst;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return lst;
}