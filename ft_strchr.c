/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:09:30 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/07 07:40:17 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t offset;

	offset = 0;
	while (*(unsigned char *)(s + offset))
	{
		if (*(unsigned char *)(s + offset) == c)
			return ((char *)(s + offset));
		++offset;
	}
	return (NULL);
}
