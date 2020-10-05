#include <stdio.h>
#include "libft.h"
#include <strings.h>
#include <stdlib.h>

int main(void) {
	const char str[] = "0123456789";
	char *scpy = (char *)malloc(sizeof(char) * 10);
	scpy = ft_memcpy(scpy, str + 2, 5);
	printf("%s\n", scpy);
	free(scpy);
	return 0;
}
