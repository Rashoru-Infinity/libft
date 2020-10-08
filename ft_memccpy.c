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
	size_t i;
	size_t offset;
	t_bool found;

	i = 0;
	offset = 0;
	found = false;
	while (i < n)
	{
		if (!found)
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		++i;
		if (*(unsigned char *)(dest + i) == *(unsigned char *)c)
		{
			offset = i;
			found = true;
		}
	}
	if (found)
		return (dest + offset);
	return (NULL);
}
