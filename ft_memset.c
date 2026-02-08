/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanantenana <fanantenana@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:24:25 by fananrak          #+#    #+#             */
/*   Updated: 2026/02/08 06:11:01 by fanantenana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	res_from_c;
	unsigned char	*oct_val;

	res_from_c = (unsigned char )c;
	oct_val = (unsigned char *)dest;
	while (count--)
	{
		*oct_val = res_from_c;
		oct_val++;
	}
	return (dest);
}
