/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 19:29:23 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/07 19:29:25 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	size_t	offset;
	int		sign;
	long	num;

	offset = 0;
	sign = 1;
	num = 0;
	while (9 <= nptr[offset] && nptr[offset] <= 13)
		++offset;
	if (nptr[offset] == '-' || nptr[offset] == '+')
	{
		++offset;
		if (nptr[offset] == '-')
			sign = -1;
	}
	while ('0' <= nptr[offset] && nptr[offset] <= '9')
	{
		num *= 10;
		num += nptr[offset++] - '0';
	}
	return ((int)(num * sign));
}
