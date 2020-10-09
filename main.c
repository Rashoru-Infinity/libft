#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char dest[30];
	char src[] = "string";
	printf("-------------------------------------------");
	printf("%zu\n", strlcpy(dest, src, 0));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", dest);
	printf("-------------------------------------------");
	printf("%zu\n", strlcpy(dest, src, 6));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, 6));
	printf("%s\n", dest);
	printf("-------------------------------------------");
	printf("%zu\n", strlcpy(dest, src, 7));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, 7));
	printf("%s\n", dest);
	printf("-------------------------------------------");
	printf("%zu\n", strlcpy(dest, src, 8));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, 8));
	printf("%s\n", dest);
	printf("-------------------------------------------");
	printf("%zu\n", strlcpy(dest, src, 30));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, 30));
	printf("%s\n", dest);
	printf("------------null byte test-----------------");
	printf("%zu\n", strlcpy(dest, "", 30));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, "", 30));
	printf("%s\n", dest);	
	return 0;
}
