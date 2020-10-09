/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 19:39:13 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/09 19:39:15 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	offset;
	char			*sub;

	if ((sub = (char *)malloc(len + 1)))
	{
		offset = 0;
		while (offset < len)
		{
			sub[offset] = s[start + offset];
			++offset;
		}
		sub[offset] = 0;
	}
	return (sub);
}
