/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:13:01 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/06 10:13:05 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t offset;

	offset = 0;
	while (offset < n)
	{
		*(char *)(dest + offset) = *(char *)(src + offset);
		if (*(char *)(src + offset) == (char)c)
			break ;
		++offset;
	}
	return (dest + offset);
}
