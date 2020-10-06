/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:31:00 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/06 10:31:02 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t offset;

	offset = 0;
	while (offset < n)
	{
		if (dest > src)
			*(unsigned char *)(dest + n - offset - 1) = *(unsigned char *)(src + n - offset - 1);
		else
			*(unsigned char *)(dest + offset) = *(unsigned char *)(src + offset);
		++offset;
	}
	return dest;
}
