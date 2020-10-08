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
	size_t found_idx;

	offset = 0;
	found_idx = 0;
	while (found_idx < n)
	{
		if (*(unsigned char *)(src + found_idx) == (unsigned char)c)
			break ;
		++found_idx;
	}
	if (found_idx == n)
		return (NULL);
	while (offset <= found_idx)
	{
		*(unsigned char *)(dest + offset) = *(unsigned char *)(src + offset);
		++offset;
	}
	return (dest + offset);
}
