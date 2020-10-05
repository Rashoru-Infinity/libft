/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:08:28 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/06 08:08:30 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	size_t offset;

	offset = 0;
	while (offset < n)
	{
		*(unsigned char *)(buf1 + offset) = *(unsigned char *)(buf2 + offset);
		++offset;
	}
	return (buf1);
}
