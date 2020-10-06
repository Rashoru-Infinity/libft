#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str[100] = "abcdefghijklmnopqrstu";
	printf("%s\n", str);
	printf("%s\n", (unsigned char *)ft_memchr(str, 'f' , sizeof(str) / sizeof(str[0])));
	return 0;
}
