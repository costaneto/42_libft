/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:42:54 by dneto             #+#    #+#             */
/*   Updated: 2022/11/14 22:12:12 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long	s_len;

	s_len = ft_strlen(s);
	if (!c)
		return ((char *)&s[s_len]);
	while (--s_len >= 0)
	{
		if ((unsigned char)s[s_len] == (unsigned char)c)
			return ((char *)&s[s_len]);
	}
	return (NULL);
}
