#include "libft.h"

static int  int_count_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char    *ft_itoa(int n)
{
    char *res;
    long    nb;
    int len;

    nb = n;
    len = int_count_len(n);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    res[len] = '\0';
    if (nb < 0)
        nb *= -1;
    while (len > 0)
    {
        len--;
        res[len] = (nb % 10) + '0';
        nb /= 10; 
    }
    if (n < 0)
        res[0] = '-';
    return (res);
}
