/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:45:21 by dneto             #+#    #+#             */
/*   Updated: 2022/08/13 18:47:54 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return s;
}

int	main(void)
{
	char	arr[] = "";
	int	i = 0;

	memset(arr + 2, 42, 3);
	while (i < 10)
	{
		printf("[%d]: %c\n", i, arr[i]);
		i++;
	}
	return (0);
}
