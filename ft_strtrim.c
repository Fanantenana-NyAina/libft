#include "libft.h"

static size_t   is_in_set(char c, const char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    char    *res;
    size_t  j;
    
    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;

    end = ft_strlen(s1);
    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    res = ft_calloc((end - start) + 1, sizeof(char));
    if (!res)
        return (0);

    j = 0;
    while (start < end)
    {
        res[j++] = s1[start++];
    }
    return (res);
}
