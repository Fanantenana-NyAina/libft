#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *is_next;

    if (!lst || !del)
        return;
    while (*lst)
    {
        is_next = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = is_next;
    }
    *lst = NULL;
}
