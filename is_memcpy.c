#include "libft.h"

void *is_memcpy(void *dest, const void *src, size_t n)
{
    char    *from_dest;
    char    *from_src;

    from_dest = (char *) dest;
    from_src = (char *) src;

    while (n--)
    {
        *from_dest = *from_src;
        from_dest++;
        from_src++;
    }
    return (dest);
}

void *is_memmove(void *dest, const void *src, size_t n)
{
    char    *from_src;
    char    *from_dest;

    if (src == dest)
        return (dest);
    from_dest = (char *) dest;
    from_src = (char *) src;
    if (from_src < from_dest && from_src + n > from_dest)
    {
        while (n--)
            from_dest[n] = from_src[n];
    }
    while (n--)
    {
        *from_dest = *from_src;
        from_dest++;
        from_src++;
    }
    return (dest);
}

size_t is_strlcat(char *dst, const char *src, size_t sz)
{
    size_t dest_len;
    size_t src_len;
    size_t i;

    src_len = ft_strlen(src);
    dest_len = 0;
    while (dest_len < sz && dst[dest_len])
        dest_len++;
    if (dest_len == sz)
        return (sz + src_len);
    i = 0;
    while (src[i] && dest_len + i + 1 < sz)
    {
        dst[dest_len + i] = src[i];
        i++;
    }
    dst[dest_len + i] = '\0';
    return (dest_len + src_len);
}
