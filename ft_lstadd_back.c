/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrogiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 04:45:23 by vrogiste          #+#    #+#             */
/*   Updated: 2022/01/22 02:41:37 by vrogiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (alst && new)
	{
		if (!*alst)
			*alst = new;
		else
		{
			last = ft_lstlast(*alst);
			last->next = new;
		}
	}
}
