#include <stdlib.h>
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *tmp;
    tmp = begin_list;
    while (tmp)
    {
        (*f)(tmp->data);
        tmp = tmp->next;
    }
}