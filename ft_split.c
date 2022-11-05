/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:46:24 by dneto             #+#    #+#             */
/*   Updated: 2022/11/05 12:26:58 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(char const *s, char sep)
{
	int		substr_count;

	substr_count = 0;
	if (*s != sep)
		substr_count = 1;
	while (*s)
	{
		if (*s != sep && *(s - 1) == sep)
			substr_count++;
		s++;
	}
	return (substr_count);
}

static char	*ft_getsubstr(char *s, char sep)
{
	int		i;
	char	*substr;

	if (!s)
		return (NULL);
	while (*s && *s == sep)
		s++;
	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	substr = malloc((i + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s, (i + 1));
	return (substr);
}

char	**ft_split(char const *s, char sep)
{
	char	**arr;
	char	*substr;
	int		i;
	int		j;
	int		counter;

	if (!s)
		return (NULL);
	counter = ft_counter(s, sep);
	arr = malloc(counter * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < counter)
	{
		j = 0;
		while (*s && *s == sep)
			s++;
		substr = ft_getsubstr(s, sep);
		arr[i++] == &substr;
		free(substr);
	}
	return (arr);
}
