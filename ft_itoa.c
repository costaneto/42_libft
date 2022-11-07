/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:20:30 by dneto             #+#    #+#             */
/*   Updated: 2022/11/07 19:15:15 by dneto            ###   ########.fr       */
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

// Recursive method
static void	create_str(char *s, int n, int count)
{
	// condition
	
	// alocate

	// null terminate
	s[count] = 0;
}

char	*ft_itoa(int n)
{
	char	*s;
	int		char_count;

	char_count = counter(n, 0) + 1;
	s = malloc(char_count * sizeof(char));
	if (!s)
		return (NULL);
	create_str(s, n, char_count);
	return (s);
}
