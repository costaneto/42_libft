/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:46:24 by dneto             #+#    #+#             */
/*   Updated: 2022/11/14 20:41:31 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(char const *s, char sep)
{
	int	substr_count;
	int	i;

	substr_count = 0;
	i = 0;
	if (s[i] != sep)
		substr_count = 1;
	while (s[i])
	{
		if (i != 0 && s[i] != sep && s[i - 1] == sep)
			substr_count++;
		i++;
	}
	return (substr_count);
}

static char	*ft_getsubstr(char const *s, char sep)
{
	int		i;
	char	*substr;

	if (!s)
		return (NULL);
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
	char	*temp;
	int		i;
	int		counter;

	if (!s)
		return (NULL);
	counter = ft_counter(s, sep);
	arr = malloc((counter + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < counter && *s)
	{
		while (*s && *s == sep)
			s++;
		temp = ft_getsubstr(s, sep);
		arr[i++] = temp;
		while (*s && *s != sep)
			s++;
	}
	arr[i] = 0;
	return (arr);
}
