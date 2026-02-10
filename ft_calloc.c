/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fananrak <fananrak@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:45:02 by fananrak          #+#    #+#             */
/*   Updated: 2026/02/10 15:15:50 by fananrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t amount, size_t size)
{
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	total = amount * size;
	if (amount != 0 && total / amount != size)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (0);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
