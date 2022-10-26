/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:07:23 by dneto             #+#    #+#             */
/*   Updated: 2022/10/26 20:01:49 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	if (ft_strlen(dest) >= n && ft_strlen(src) >= n)
	{
		temp = malloc(n * sizeof(char));
		i = 0;
		while (i < n)
		{
			temp[i] = ((unsigned char *)src)[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = temp[i];
			i++;
		}
		free(temp);
	}
	return (dest);
}


#include <stdio.h>

int main()
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char *test;
	int i = 0;
	test = ft_memmove(s0, s, 7);
	int res = ft_memcmp(s, s0, 7);

	printf("\n\n%d\n\n", res);
	while (i < 7)
	{
		printf("\n{ %d }={ %d }={ %d }\n", test[i], s[i], s0[i]);
		i++;
	}
	printf("\n\n");
	return (0);	
}