/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 21:22:43 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/06 21:22:45 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t offset;
	size_t dest_size;
	size_t src_size;

	offset = 0;
	dest_size = 0;
	src_size = 0;
	while (dest[dest_size])
		++dest_size;
	while (src[src_size])
		++src_size;
	while (offset < size && src[offset])
	{
		*(dest + dest_size + offset) = src[offset + dest_size];
		++offset;
	}
	dest[offset + dest_size] = 0;
	return (src_size + size);
}
