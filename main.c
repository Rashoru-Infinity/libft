#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

int main(void) {
	t_list *l;
	int *x = malloc(sizeof(int));
	*x = 1;
	l = ft_lstnew((void *)x);
	printf("%d\n", *(int *)(l->content));
	free(l->content);
	free(l);
}
