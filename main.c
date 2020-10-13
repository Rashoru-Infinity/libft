#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

char func(unsigned int n, char c)
{
	return (c + n) % 256;
}

int main(void) {
	char (*f)(unsigned int, char) = func;
	char const *s = "string";
	char *p = ft_strmapi(s, f);
	if (p)
	{
		printf("%s\n", p);
		free(p);
	}
}
