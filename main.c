#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char *sub;
	char *tmp = "this is a normal test";
	sub = ft_substr(tmp, 5, 8);
	if (sub)
	{
		printf("%s\n", sub);
		free(sub);
	}
	return 0;
}
