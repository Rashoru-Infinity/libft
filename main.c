#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	int size = 5;
	int	*p = ft_calloc(size, sizeof(int));
	//int *p = calloc(size, sizeof(int));
	if (p)
	{
		for (int i = 0;i < size;++i)
		{
			printf("%d : %d\n", i, p[i]);
		}
		free(p);
	}
	return 0;
}
