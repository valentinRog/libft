/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrogiste <vrogiste@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:05:25 by vrogiste          #+#    #+#             */
/*   Updated: 2022/07/04 12:17:37 by vrogiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > 1 && *s1 && *s1 == *s2)
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	return ((n > 0) * (*(unsigned char *)s1 - *(unsigned char *)s2));
}
