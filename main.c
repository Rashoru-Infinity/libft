#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char dest[30] = "dest part\0";
	char src[] = "src part";
	printf("-------------------------------------------\n");
	printf("%zu\n", strlcpy(dest, src, 16));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("%zu\n", ft_strlcpy(dest, src, 16));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("-------------------------------------------\n");
	printf("%zu\n", strlcpy(dest, src, 17));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("%zu\n", ft_strlcpy(dest, src, 17));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("-------------------------------------------\n");
	printf("%zu\n", strlcpy(dest, src, 18));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("%zu\n", ft_strlcpy(dest, src, 18));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("-------------------------------------------\n");
	printf("%zu\n", strlcpy(dest, src, 30));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("%zu\n", ft_strlcpy(dest, src, 30));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("-------------------------------------------\n");
	printf("%zu\n", strlcpy(dest, src, 0));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("%zu\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("------------null byte test-----------------\n");
	printf("%zu\n", strlcpy(dest, "", 30));
	printf("%s\n", dest);
	dest[30] = "dest part\0";
	printf("%zu\n", ft_strlcpy(dest, "", 30));
	printf("%s\n", dest);	
	return 0;
}
