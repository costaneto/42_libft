/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:55:29 by dneto             #+#    #+#             */
/*   Updated: 2022/10/25 21:29:43 by dneto            ###   ########.fr       */
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
	printf(" fine1\n\n");
	while (s[begin] && ft_strchr(set, s[begin]))
		begin++;
	printf(" fine2\n\n");
	if (begin == ft_strlen(s) - 1)
	{
		printf(" beggin == len(s) - 1");
		return (NULL);
	}
	printf(" fine3\n\n");
	while (s[stop] && ft_strchr(set, s[stop]))
		stop--;
	printf(" fine4\n\n");
	trim = malloc((stop - begin + 2) * sizeof(char));
	printf(" fine5\n\n");
	i = 0;
	while (begin <= stop)
		trim[i++] = s[begin++];
	printf(" fine6\n\n");
	trim[i] = 0;
	printf(" fine7\n\n");
	return (trim);
}


int	main(void)
{
	printf("\n\n");
	char s[] = ".........ooooo.....ooooo";
	char set[] = "osdas..";
	char *test;

	test = ft_strtrim(s, set);
	printf("\n\n %p\n\n", test);

	return (0);
}