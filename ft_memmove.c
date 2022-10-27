/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:07:23 by dneto             #+#    #+#             */
/*   Updated: 2022/10/27 17:11:06 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (s && d)
	{
		if (s >= d)
		{
			while (i < n)
			{
				((unsigned char *)d)[i] = ((unsigned char *)s)[i];
				i++;
			}
		}
		else
		{
			while (n > 0)
			{
				((unsigned char *)d)[n - 1] = ((unsigned char *)s)[n - 1];
				n--;
			}
		}
		return (d);
	}
	return (NULL);
}
