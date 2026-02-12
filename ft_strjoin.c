/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fananrak <fananrak@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:30:43 by fananrak          #+#    #+#             */
/*   Updated: 2026/02/11 13:42:07 by fananrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	res = ft_calloc(total_len, sizeof(char));
	if (!res)
		return (0);
	ft_strlcat(res, s1, total_len);
	ft_strlcat(res, s2, total_len);
	return (res);
}
