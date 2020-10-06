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

size_t	ft_strlcpy(char *dest, const char *src. size_t size)
{
	size_t offset;

	while (offset < size - 1)
	{
		dest[offset] = src[offset];
		++offset;
	}
	dest[offset] = 0;
	return (offset);
}
