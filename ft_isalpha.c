/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 19:53:07 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/07 19:53:09 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= (unsigned char)c && (unsigned char)c <= 'Z') ||\
		 ('a' <= (unsigned char)c && (unsigned char)c <= 'z'))
		return (1);
	return (0);
}
