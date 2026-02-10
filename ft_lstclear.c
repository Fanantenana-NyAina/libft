/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fananrak <fananrak@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:58:19 by fananrak          #+#    #+#             */
/*   Updated: 2026/02/10 14:59:26 by fananrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*is_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		is_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = is_next;
	}
	*lst = NULL;
}
