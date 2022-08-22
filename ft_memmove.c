/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:07:23 by dneto             #+#    #+#             */
/*   Updated: 2022/08/22 23:47:46 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;

	if (ft_strlen(dest) >= n)
	{
		temp = malloc(n * sizeof(char));
		while (n--)
		{
			temp[n] = *((unsigned char *)src + n);
			*(unsigned char *)(dest + n) = temp[n];
		}
		free(temp);
	}
	return (dest);
}
