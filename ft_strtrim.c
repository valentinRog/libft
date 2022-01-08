/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrogiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:15:58 by vrogiste          #+#    #+#             */
/*   Updated: 2022/01/06 16:34:40 by vrogiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_str(char c, char const *charset)
{
	if (c == *charset)
		return (1);
	if (*charset)
		return (is_in_str(c, charset + 1));
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*dst;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (is_in_str(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (is_in_str(s1[end], set))
		end--;
	if (end < start)
	{
		dst = malloc(1);
		if (!dst)
			return (NULL);
		*dst = 0;
		return (dst);
	}
	dst = ft_substr(s1, start, (end - start) + 1);
	return (dst);
}
