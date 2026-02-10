/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fananrak <fananrak@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:15:15 by fananrak          #+#    #+#             */
/*   Updated: 2026/02/10 15:16:17 by fananrak         ###   ########.fr       */
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
