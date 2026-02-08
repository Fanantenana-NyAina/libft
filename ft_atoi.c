#include "libft.h"

int ft_atoi(const char *str)
{
    int sign;
    int res;
    while (*str == ' ' || *str == '\t' || *str == '\n' || 
       *str == '\v' || *str == '\f' || *str == '\r')
    {
         str++;   
    }
    
    sign = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    res = 0;
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res * sign);
}
