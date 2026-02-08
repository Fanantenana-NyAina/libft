#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t total_len;

    total_len =  (ft_strlen(s1) + ft_strlen(s2)) + 1;
    res = ft_calloc(total_len, sizeof(char));

    if (!res)
        return (0);

    ft_strlcat(res, s1, total_len);
    ft_strlcat(res, s2, total_len);
    return (res);
}
