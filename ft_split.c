/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:46:24 by dneto             #+#    #+#             */
/*   Updated: 2022/11/05 08:52:47 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char sep)
{
	char	**arr;
	char	*substr;
	int		i;

	if (!s)
		return (NULL);
	arr = malloc(i * sizeof(char *));
	if (!arr)
		return (NULL);
	return (arr);
}


/*
if (!s)
		return (NULL);
		
	counter = 0;


	while (*s && *s == sep)
		s++;
	i = 0;
	while (s[i] && s[i] != sep)
		i++;


	substr = malloc((i + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s, (i + 1));
	
	arr[i] == &substr;

	counter++;
*/

void	counter(char *s, char sep)
{
	int	i;

	i = 0;
	while (s[i])
	{
		/* code */
	}
	
}