/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:37:22 by dneto             #+#    #+#             */
/*   Updated: 2022/10/30 14:59:19 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = ft_strlen(src);
	if (!size)
		return (s_len);
	d_len = ft_strlen(dest);
	i = 0;
	if (size == 0 || size <= d_len)
		return (s_len + size);
	while (i < (size - d_len - 1) && src[i])
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = 0;
	return (d_len + s_len);
}
