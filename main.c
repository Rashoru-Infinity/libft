#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str[] = "ubuntu";
	char search[] = "nt";
	printf("%s\n", ft_strnstr(str, search, 7));	
	printf("%s\n", ft_strnstr(str, "\0", 7));
	printf("%s\n", strnstr(str, search, 7));
	printf("%s\n", strnstr(str, "\0", 7));
	return 0;
}
