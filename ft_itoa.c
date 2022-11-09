/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:20:30 by dneto             #+#    #+#             */
/*   Updated: 2022/11/09 17:07:34 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int n, int count)
{
	long	long_n;

	long_n = n;
	if (long_n < 0)
	{
		count = 1;
		long_n = -long_n;
	}
	if (long_n < 10)
		count++;
	else
	{
		count = counter(long_n % 10, count);
		count = counter(long_n / 10, count);
	}
	return (count);
}

static void	create_str(char *s, int n, int count)
{
	long	long_n;

	long_n = n;
	s[count] = 0;
	if (long_n < 0)
	{
		s[0] = '-';
		long_n = -long_n;
		while (--count > 0)
		{
			s[count] = (long_n % 10) + 48;
			long_n = long_n / 10;
		}
	}
	else
	{
		while (--count >= 0)
		{
			s[count] = (long_n % 10) + 48;
			long_n = long_n / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		char_count;

	char_count = counter(n, 0) + 1;
	s = malloc(char_count * sizeof(char));
	if (!s)
		return (NULL);
	create_str(s, n, char_count - 1);
	return (s);
}
