#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str1[] = "999999999999";
	printf("%d\n", atoi(str1));
	printf("%d\n", ft_atoi(str1));
	char str2[] = "+012 34";
	printf("%d\n", atoi(str2));
	printf("%d\n", ft_atoi(str2));
	char str3[] = "-\t1234";
	printf("%d\n", atoi(str3));
	printf("%d\n", ft_atoi(str3));
	return 0;
}
