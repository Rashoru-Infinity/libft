#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char dest[15] = "abc";
	char src[] = "trucmachin";
	printf("%zu\n", ft_strlcat(dest, src, 9));
	printf("%s\n", dest);
	printf("%zu\n", strlcat(dest, src, 9));
	printf("%s\n", dest);
	return 0;
}
