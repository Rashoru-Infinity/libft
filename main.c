#include <stdio.h>
#include "libft.h"
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str[] = "abcdefghijklmnopqrstu";
	printf("%s\n", str);
	ft_memmove(str, str + 12, 5);
	printf("%s\n", str);
	return 0;
}
