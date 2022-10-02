/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:51:36 by dneto             #+#    #+#             */
/*   Updated: 2022/10/02 23:21:53 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while ((str1 != str2) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// (str1[i] || str2[i]) && 


#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[] = "abcdefghi";
	// char s2[] = "abcdzfghi";
	// char s4[] = "abcdef";
	// char s3[] = "";

	// s1
	printf("\n\ns1: \"%s\" (len: %zu)\n______________________________________\n\n", s1, ft_strlen(s1));
	int res1 = ft_memcmp(s1, s1, 15);
	int res2 = memcmp(s1, s1, 15);
	printf("[15] s1: \"%s\"  >>  %d  >>  %d\n\n", s1, res1, res2);
	return (0);
}