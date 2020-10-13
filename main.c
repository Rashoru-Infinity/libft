#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

int main(void) {
	int n = 3865610;
	char *c = ft_itoa(n);
	printf("%s\n", c);
	free(c);
}
