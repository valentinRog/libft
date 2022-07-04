/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrogiste <vrogiste@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:25:34 by vrogiste          #+#    #+#             */
/*   Updated: 2022/07/04 08:29:42 by vrogiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	uint64_t	sum;
	int			sign;

	sum = 0;
	sign = 1;
	while (ft_strchr(" \t\n\r\v\f", *str))
		str++;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign = -1;
	while (ft_isdigit(*str))
	{
		sum *= 10;
		sum += *str - '0';
		str++;
	}
	if (sum > LLONG_MAX && sign == 1)
		return (-1);
	if (sum - 1 > LLONG_MAX && sign == -1)
		return (0);
	return (sum * sign);
}
