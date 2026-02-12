#include "libft.h"

void *is_memset(void *s, int c, size_t n)
{
    char from_c;
    char *cst_s;

    from_c = (char) c;
    cst_s = (char *) s;

    while (n--)
    {
        *cst_s = from_c;
        cst_s++;
    }
    return (s);
}