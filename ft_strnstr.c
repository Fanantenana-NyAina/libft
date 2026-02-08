#include "libft.h"

char    *ft_strnstr(const char *big, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    if (*needle == '\0')
        return ((char *)big);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (needle[j] && (i + j) < len && big[i + j] == needle[j])
            j++;
        if (needle[j] == '\0')
            return ((char *)&big[i]);
        i++;
    }
    return (0);
}

