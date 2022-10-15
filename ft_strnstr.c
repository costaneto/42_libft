/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:28:52 by dneto             #+#    #+#             */
/*   Updated: 2022/10/15 15:49:23 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!ft_strlen(little))
		return (big);
	while (i < len)
	{
		if (big[i] == little[0])
		{
			return ;
		}
		else
			i++;
	}
	return (NULL);
}


int	main(void)
{
	char lil1[] = "sdasda";
	char big[] = "Hello world!";
	size_t n = 12;

	char *ptr = strnstr(big, lil1, n);

	printf("\n\n %s\n\n", big);
	if (ptr)
		printf("[ \"%s\" - %zu ] > %p > %c(%c)%c\n\n", lil1, n, ptr, *(ptr - 1), *(ptr), *(ptr + 1));
	else
		printf("[ \"%s\" - %zu ] > %p\n\n", lil1, n, ptr);

	return (0);
}