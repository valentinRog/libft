/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrogiste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:25:34 by vrogiste          #+#    #+#             */
/*   Updated: 2022/01/08 09:39:25 by vrogiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long int	sum;
	int						sign;

	sum = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\v' || *str == '\f')
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
