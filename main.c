#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char *str;
	char *tmp = "this is a normal test";
	str = ft_strdup(tmp);
	printf("%s\n", str);
	return 0;
}
