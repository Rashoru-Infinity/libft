#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str1[] = "st\0ring1";
	char str2[] = "st\0ring2";
	printf("ft_diff : %d\n", ft_memcmp(str1, str2, 8));
	printf("original diff : %d\n", memcmp(str1, str2, 8));
	return 0;
}
