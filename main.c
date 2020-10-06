#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str1[] = "string1";
	char str2[] = "string2";
	printf("ft_diff : %d\n", ft_memcmp(str1, str2, 7));
	printf("original diff : %d\n", memcmp(str1, str2, 7));
	return 0;
}
