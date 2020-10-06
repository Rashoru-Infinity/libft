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

	offset = 0;
	while (*dest)
		++dest;
	while (offset < size && src[offset])
	{
		*(dest + offset) = src[offset];
		++offset;
	}
	dest[offset] = 0;
	return (offset);
}
