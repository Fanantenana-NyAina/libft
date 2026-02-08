#include "libft.h"

char    *ft_strdup(const char *src)
{
    char    *dup;
    int     len;
    int     i;

    len = ft_strlen(src);
    dup = malloc(len + 1);
    if (!dup)
        return (0);
    
    i = 0;
    while (i < len)
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
