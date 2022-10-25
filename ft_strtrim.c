/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:55:29 by dneto             #+#    #+#             */
/*   Updated: 2022/10/25 18:30:39 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		has_first;
	int		has_last;
	size_t	i;
	size_t	j;
	char	*trim;

	i = 0;
	has_first = 0;
	has_last = 0;
	while (set[i])
	{
		if (s1[0] == set[i])
			has_first = 1;
		if (s1[ft_strlen(s1) - 1] == set[i])
			has_last = 1;
		i++;
	}
	i = 0;
	j = 1;
	if (has_first && has_last)
	{
		trim = malloc((ft_strlen(s1) - 1) * sizeof(char));
		while (s1[j] && j < ft_strlen(s1) - 1)
		{
			trim[i] = s1[j];
			j++;
			i++;
		}
	}
	else if (has_first || has_last)
	{
		trim = malloc(ft_strlen(s1) * sizeof(char));
		
	}
	else
		trim = s1;
	return (trim);
}
