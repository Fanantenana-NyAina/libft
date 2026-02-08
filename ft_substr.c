#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *res;
    size_t  s_len;

    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        res = malloc(1);
        if (res)
            res[0] = '\0';
        return (res);
    }
    if (len > s_len - start)
        len = s_len - start;
    
    res = malloc(len + 1);
    if (!res)
        return (NULL);
    ft_memcpy(res, s + start, len);
    res[len] = '\0';
    return (res);
}
