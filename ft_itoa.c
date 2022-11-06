/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:20:30 by dneto             #+#    #+#             */
/*   Updated: 2022/11/06 16:38:57 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count = 1;
		n = -n;
	}
	if (n < 10)
		count++;
	
}

char	*ft_itoa(int n)
{
	char	*s;
	int		digit_count;

	digit_count = 0;
}
