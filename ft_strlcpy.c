/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:28:53 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/06 17:30:58 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t src_size;
	size_t offset;

	src_size = 0;
	while ((unsigned char)src[src_size])
		++src_size;
	offset = 0;
	while (offset < size)
	{
		if (src[offset])
			dest[offset] = src[offset];
		else
			dest[offset] = 0;
		++offset;
	}
	return (src_size);
}
