#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str1[] = "ubuntu";
	char str2[] = "ubunt";
	printf("strncmp : %d\n", strncmp(str1, str2, 5));
	printf("ft_strncmp : %d\n", ft_strncmp(str1, str2, 5));
	printf("strncmp : %d\n", strncmp(str1, str2, 6));
	printf("ft_strncmp : %d\n", ft_strncmp(str1, str2, 6));
	return 0;
}
