/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:33:51 by dneto             #+#    #+#             */
/*   Updated: 2022/10/28 19:50:16 by dneto            ###   ########.fr       */
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
	if (!str)
		return (0);
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] && str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * signal);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main()
// {
//     char str1[] = "1";
//     char str2[] = "++1";
//     char str3[] = "-+1";

//     printf("\n\nstr1: %d    str2: %d    str3: %d\n\n", atoi(str1), atoi(str2), atoi(str3));
//     printf("\n\nstr1: %d    str2: %d    str3: %d\n\n", ft_atoi(str1), ft_atoi(str2), ft_atoi(str3));
//     return (0);
// }