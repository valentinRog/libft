/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrogiste <vrogiste@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:57:47 by vrogiste          #+#    #+#             */
/*   Updated: 2022/07/04 07:53:44 by vrogiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && haystack[i] == needle[i] && i < len)
		i++;
	if (ft_strlen(needle) == i)
		return ((char *) haystack);
	if (ft_strlen(haystack) > 1 && len)
		return (ft_strnstr(haystack + 1, needle, len - 1));
	return (NULL);
}
