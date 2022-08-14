/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:45:21 by dneto             #+#    #+#             */
/*   Updated: 2022/08/14 16:03:25 by marvin           ###   ########.fr       */
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
		((char*)s)[i] = (unsigned char)c;
		i++;
	}
	return s;
}

int	main(void)
{
	char	arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i = 0;

	ft_memset(arr + 2, 42, 3);
	while (i < 10)
	{
		printf("[%d]: %d\n", i, arr[i]);
		i++;
	}
	return (0);
}
