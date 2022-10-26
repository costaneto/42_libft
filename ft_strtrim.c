/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:55:29 by dneto             #+#    #+#             */
/*   Updated: 2022/10/26 18:10:10 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trim;
	size_t	begin;
	size_t	stop;
	size_t	i;

	if (!set)
		return (NULL);
	begin = 0;
	stop = ft_strlen(s) - 1;
	while (s[begin] && ft_strchr(set, s[begin]))
		begin++;
	if (begin == ft_strlen(s) - 1)
		return (NULL);
	while (s[stop] && ft_strchr(set, s[stop]))
		stop--;
	trim = malloc((stop - begin + 2) * sizeof(char));
	i = 0;
	while (begin <= stop)
		trim[i++] = s[begin++];
	trim[i] = 0;
	return (trim);
}
