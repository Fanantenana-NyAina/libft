#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;
    
    node = malloc(sizeof(t_list));
    if (!node)
        return (0);
    node->content =  content;
    node->next = NULL;
    return (node);
}

int main()
{
    t_list  *node;
    char    *str;

    str = "hello world";
    node = ft_lstnew(str);

    printf("%s", (char *) node->next);
}
