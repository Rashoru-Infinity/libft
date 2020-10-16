#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

void del(void *content)
{
	free(content);
}

void *func(void *str)
{
	for (int i = 0;*(char *)(str + i);++i) {
		(*(char *)(str + i))++;
	}
	return str;
}

int main(void) {
	t_list *lst = (t_list *)malloc(sizeof(t_list));
	lst->content = strdup("string1");
	lst->next = (t_list *)malloc(sizeof(t_list));
	lst->next->content = strdup("string2");
	t_list *p = ft_lstmap(lst, func, del);
	t_list *tmp = p;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	while (lst)
	{
		t_list *tmp;
		del(lst->content);
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}	
	return (0);
}
