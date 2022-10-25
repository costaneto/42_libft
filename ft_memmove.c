/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:07:23 by dneto             #+#    #+#             */
/*   Updated: 2022/10/25 18:20:55 by dneto            ###   ########.fr       */
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
