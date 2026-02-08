/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:39:13 by fanantenana       #+#    #+#             */
/*   Updated: 2026/02/08 08:24:26 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*sp;
	char		*dp;

	if (src == dest)
		return (dest);
	dp = (char *)dest;
	sp = (const char *)src;

	if (sp < dp && sp + n > dp)
		while (n--)
			*(dp + n) = *(sp + n);
	else
	{
		while (n--)
		{
			*dp = *sp;
			sp++;
			dp++;
		}
	}
	return (dest);
}
