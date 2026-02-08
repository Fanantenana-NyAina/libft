/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 06:28:45 by fanantenana       #+#    #+#             */
/*   Updated: 2026/02/08 06:34:48 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char ch;

    ch = (char)c;
    if (ch == '\0')
    {
        while (*s)
            s++;
        return ((char *)s);
    }
    while (*s)
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    return (0);
}
