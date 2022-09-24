/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:28:52 by dneto             #+#    #+#             */
/*   Updated: 2022/09/14 22:13:40 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char lil1[] = "wor";
	char big[] = "Hello world!";

	char *ptr = strnstr(big, lil1, 12);

	printf("\n\n");
	printf("[ lil1 - 12 ] > %c\n\n", *ptr);
	return (0);
}