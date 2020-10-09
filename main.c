#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char dest1[30] = "dest part ";
	char dest2[30] = "dest part ";
	char dest3[30] = "dest part ";
	char dest4[30] = "dest part ";
	char src[] = "src part";
	printf("-------------------------------------------\n");
	printf("%zu\n", strlcat(dest1, src, 16));
	printf("%s\n", dest1);
	printf("%zu\n", ft_strlcat(dest2, src, 16));
	printf("%s\n", dest2);
	printf("------------null byte test-----------------\n");
	printf("%zu\n", strlcat(dest3, "", 30));
	printf("%s\n", dest3);
	printf("%zu\n", ft_strlcat(dest4, "", 30));
	printf("%s\n", dest4);	
	return 0;
}
