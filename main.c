#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char dest1[30] = "dest part\0";
	char dest2[30] = "dest part\0";
	char dest3[30] = "dest part\0";
	char dest4[30] = "dest part\0";
	char src[] = "src part";
	printf("-------------------------------------------\n");
	printf("%zu\n", strlcpy(dest1, src, 16));
	printf("%s\n", dest1);
	printf("%zu\n", ft_strlcpy(dest2, src, 16));
	printf("%s\n", dest2);
	printf("------------null byte test-----------------\n");
	printf("%zu\n", strlcpy(dest3, "", 30));
	printf("%s\n", dest3);
	printf("%zu\n", ft_strlcpy(dest4, "", 30));
	printf("%s\n", dest4);	
	return 0;
}
