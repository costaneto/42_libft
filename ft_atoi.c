/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:33:51 by dneto             #+#    #+#             */
/*   Updated: 2022/10/29 18:45:01 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	value;
	int		signal;

	signal = 1;
	value = 0;
	if (!*str)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		value = value * 10 + (*str++ - 48);
		if (value > 2147483648 && signal == -1)
			return (0);
		else if (value > 2147483647 && signal == 1)
			return (-1);
	}
	return (value * signal);
}
