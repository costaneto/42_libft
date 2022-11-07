/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:20:30 by dneto             #+#    #+#             */
/*   Updated: 2022/11/07 20:48:33 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Recursive method
static int	counter(int n, int count)
{
	if (n < 0)
	{
		count = 1;
		n = -n;
	}
	if (n < 10)
		count++;
	else
	{
		count = counter(n % 10, count);
		count = counter(n / 10, count);
	}
	return (count);
}

static void	create_str(char *s, int n, int count)
{
	s[count] = 0;
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
		while (--count > 0)
		{
			s[count] = (n % 10) + 48;
			n = n / 10;
		}
	}
	else
	{
		while (--count >= 0)
		{
			s[count] = (n % 10) + 48;
			n = n / 10;
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
