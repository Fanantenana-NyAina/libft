/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fananrak <fananrak@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:55:44 by fananrak          #+#    #+#             */
/*   Updated: 2026/02/10 15:14:17 by fananrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cast_src;
	unsigned char	*cast_dest;

	cast_src = (unsigned char *)src;
	cast_dest = (unsigned char *)dest;
	while (n--)
	{
		*cast_dest = *cast_src;
		cast_src++;
		cast_dest++;
	}
	return (dest);
}
