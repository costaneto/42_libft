/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:42:54 by dneto             #+#    #+#             */
/*   Updated: 2022/10/26 19:09:41 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s) - 1;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (s[s_len])
	{
		if (s[s_len] == (unsigned char)c)
			return ((char *)s + s_len);
		s_len--;
	}
	return (NULL);
}
