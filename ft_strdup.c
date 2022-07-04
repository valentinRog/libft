/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrogiste <vrogiste@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 21:21:49 by vrogiste          #+#    #+#             */
/*   Updated: 2022/07/04 07:13:21 by vrogiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = malloc(ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s, ft_strlen(s) + 1);
	return (dst);
}
