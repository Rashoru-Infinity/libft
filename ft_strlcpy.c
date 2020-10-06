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
	size_t offset;

	offset = 0;
	if (size != 0)
	{
		while (offset < size - 1)
		{
			if (!src[offset])
			{
				dest[offset] = 0;
				break ;
			}
			dest[offset] = src[offset];
			++offset;
		}
	}
	if (offset = size - 1)
	{
		while (src[offset++])
			;
	}
	return (offset - 1);
}
