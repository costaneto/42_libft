/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:46:24 by dneto             #+#    #+#             */
/*   Updated: 2022/11/05 14:37:53 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	printf("\n\n%d\n\n", counter);
	arr = malloc(counter * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < counter)
	{
		while (*s && *s == sep)
			s++;
		temp = ft_getsubstr(s, sep);
		arr[i++] = temp;
		free(temp);
		while (*s && *s != sep)
			s++;
	}
	return (arr);
}


int main()
{
	char *string = "      split   ggg    this for   me  !       ";
	char **result = ft_split(string, ' ');
	printf("\n\n%s\n\n", result[0]);
	return (0);
}