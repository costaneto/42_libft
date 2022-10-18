/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:33:51 by dneto             #+#    #+#             */
/*   Updated: 2022/10/18 23:06:39 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		signal;
	int		res;

	i = 0;
	signal = 1;
	res = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		i++;
		if (str[0] == '-')
			signal *= -1;
	}
	while (str[i] && str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * signal);
}
