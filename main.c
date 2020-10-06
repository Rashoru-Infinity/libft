#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char dest[15];
	char orig[] = "trucmachin";
	printf("%zu\n", ft_strlcpy(dest, orig, 5));
	printf("%s\n", dest);
	printf("%zu", strlcpy(dest, orig, 5));
	printf("%s\n",dest);
	return 0;
}
