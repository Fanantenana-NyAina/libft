#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    res;
    long    nb;

    nb = n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb *= -1;
    }
    if (nb >= 10)
        ft_putnbr_fd(nb/10, fd);
    res = (nb % 10) + '0';   
    write(fd, &res, 1);
}
