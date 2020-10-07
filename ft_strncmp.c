/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 19:03:35 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/07 19:03:37 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t offset;

	offset = 0;
	while (*(s1 + offset) && *(s2 + offset))
	{
		if (*(s1 + offset) != *(s2 + offset))
			break ;
		if (offset + 1 == n)
			break ;
		++offset;
	}
	if (!*(s1 + offset) && !*(s2 + offset))
		return (0);
	if (!*(s1 + offset))
		return (-*(s2 + offset));
	if (!*(s2 + offset))
		return (*(s1 + offset));
	return (*(s1 + offset) - *(s2 + offset));
}
