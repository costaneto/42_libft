/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:28:52 by dneto             #+#    #+#             */
/*   Updated: 2022/10/31 16:30:58 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while ((i < len) && big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < len) && (big[i + j] != 0))
			j++;
		if (little[j] == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
