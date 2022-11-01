/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:55:29 by dneto             #+#    #+#             */
/*   Updated: 2022/11/01 11:36:58 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	begin;
	size_t	stop;

	if (!set || !s)
		return (NULL);
	begin = 0;
	while (ft_strchr(set, s[begin]))
		begin++;
	stop = ft_strlen(s) - 1;
	while (stop > begin && ft_strchr(set, s[stop]))
		stop--;
	return (ft_substr(s, begin, (stop - begin + 1)));
}
