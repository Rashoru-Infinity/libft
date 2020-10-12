/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 09:55:04 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/12 09:55:05 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char 	del[256];
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	while (i < 256)
		del[i++] = 0;
	i = 0;
	j = 0;
	while (set[i])
	{
		if (!del[(int)set[i]])
			++j;
		del[(int)set[i++]] = 1;
	}
	if ((str = (char *)malloc(ft_strlen(s1) - j + 1)))
	{
		i = 0;
		j = 0;
		while (s1[i])
			if (!del[(int)s1[i++]])
				str[j++] = s1[i - 1];
		str[j] = 0;
	}
	return (str);
}
