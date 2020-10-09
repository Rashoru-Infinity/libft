#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char dest1[1024] = "there is no stars in the sky\0";
	char dest2[1024] = "there is no stars in the sky\0";
	char dest3[1024] = "there is no stars in the sky\0";
	char dest4[1024] = "there is no stars in the sky\0";
	char src[] = "the cake is a lie !\0I'm hidden lol\r\n";
	printf("destsize->%zu\n", strlen(dest1));
	printf("srcsize->%zu\n", strlen(src));
	printf("-------------------------------------------\n");
	printf("%zu\n", strlcat(dest1, src, 25));
	printf("%s\n", dest1);
	printf("%zu\n", ft_strlcat(dest2, src, 25));
	printf("%s\n", dest2);
	printf("------------null byte test-----------------\n");
	printf("%zu\n", strlcat(dest3, "", 0));
	printf("%s\n", dest3);
	printf("%zu\n", ft_strlcat(dest4, "", 0));
	printf("%s\n", dest4);	
	return 0;
}
