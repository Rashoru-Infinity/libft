#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char src[] = "test basic du memccpy !";
	char dest[22];
	for(int i = 0;i < 22;i++)
		printf("%c->%p\n", src[i], &src[i]);
	char *p = memccpy(dest, src, 'm', 22);
	printf("%c->%p\n", *p, p);
	p = ft_memccpy(dest, src, 'm', 22);
	printf("%c->%p\n", *p, p);
	return 0;
}
