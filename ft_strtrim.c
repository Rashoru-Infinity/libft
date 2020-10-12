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

static char	*trimcpy(char *str, char const *s1, char del[256])
{
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start])
	{
		if (!del[(int)s1[start]])
			break ;
		++start;
	}
	end = ft_strlen(s1) - 1i;
	while (end > start)
	{
		if (del[(int)s1[end]])
			break ;
		--end;
	}
	if ((str = (char *)malloc(end - start + 1)))
	{
		ft_memcpy(str, &s1[start], end - start);
		str[end - start] = 0;
	}
	return (str);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char 	del[256];
	size_t	i;
	char	*str;

	str = NULL;
	if (ft_strlen(s1) == 0)
		return (str);
	i = 0;
	while (i < 256)
		del[i++] = 0;
	i = 0;
	while (set[i])
		del[(int)set[i++]] = 1;
	return (trimcpy(str, s1, del));
}
