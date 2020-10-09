#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char dest[30];
	char src[] = "string";
	printf("%zu\n", strlcpy(dest, src, 6));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, 6));
	printf("%s\n", dest);
	return 0;
}
