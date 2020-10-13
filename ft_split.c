/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 09:57:36 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/13 09:57:37 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t offset;
	size_t words;
	t_bool countable;

	words = 0;
	countable = false;
	offset = 0;
	while (true)
	{
		if (s[offset])
		{
			++words;
			break ;
		}
		if ((unsigned char)s[offset] != (unsigned char)c)
			countable = true;
		if ((unsigned char)s[offset] == (unsigned char)c && countable)
		{
			countable = false;
			++words;
		}
		++offset;
	}
	return (words);
}

static size_t	get_length(char *head, char c)
{
	size_t	max;

	max = 0;
	while (head[max])
	{
		if ((unsigned char)head[max] == (unsigned char)c)
			break ;
		++max;
	}
	return (max);
}

static char		*split_copy(char *head, size_t size)
{
	char	*str;
	size_t	offset;

	if ((str = (char *)malloc(size + 1)))
	{
		offset = 0;
		while  (offset < size)
		{
			str[offset] = head[offset];
			++offset;
		}
		str[offset] = 0;
	}
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;
	char	*readp;
	size_t	wd_cnt;
	size_t	words;
	size_t	word_len;

	words = count_words(s, c);
	if ((strs = (char **)malloc(8 * (words + 1))))
	{
		strs[words] = NULL;
		readp = (char *)s;
		wd_cnt = 0;
		while (wd_cnt < words)
		{
			while (*readp == c)
				++readp;
			word_len = get_length(readp, c);
			*(strs + wd_cnt) = split_copy(readp, word_len);
			++wd_cnt;
			readp += word_len;
		}
	}
	return (strs);
}
