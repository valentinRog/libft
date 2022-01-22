/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrogiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 05:23:10 by vrogiste          #+#    #+#             */
/*   Updated: 2022/01/22 02:38:25 by vrogiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*swap;

	while (lst && del && *lst)
	{
		swap = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = swap;
	}
}
