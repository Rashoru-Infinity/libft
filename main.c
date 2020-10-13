#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

int main(void) {
	int n = INT_MIN;
	printf("%d\n", n);
	char *p = ft_itoa(n);
	if (p)
	{
		printf("%s\n", p);
		free(p);
	}
	return 0;
}
