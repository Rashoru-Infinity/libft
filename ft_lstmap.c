/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khagiwar <khagiwar@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 23:00:28 by khagiwar          #+#    #+#             */
/*   Updated: 2020/10/16 23:00:36 by khagiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*currlst;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	currlst = lst;
	while (currlst)
	{
		tmp = f(currlst->content);
		if (tmp)
		{
			(*currlst).content = tmp;
			currlst = currlst->next;
		}
		else
		{
			while (lst)
			{
				currlst = lst->next;
				ft_lstdelone(lst, del);
				lst = currlst;
			}
			return (NULL);
		}
	}
	return (lst);
}
