/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 08:35:36 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/07 08:35:38 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t head;
	size_t offset;
	size_t little_size;

	head = 0;
	little_size = 0;
	while (*(unsigned char *)(little + little_size))
		++little_size;
	while (head + little_size < len)
	{
		offset = 0;
		while (offset < little_size)
		{
			if (*(unsigned char *)(big + head + offset) !=\
				*(unsigned char *)(little + offset))
				break ;
			++offset;
		}
		if (offset == little_size)
			return ((char *)(big + head));
		++head;
	}
	return (NULL);
}