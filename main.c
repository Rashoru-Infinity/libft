#include <stdio.h>
#include "libft.h"
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str[] = "abcdefghijklmnopqrstu";
	printf("%s\n", str);
	ft_memmove(str + 12, str , 5);
	printf("%s\n", str);
	return 0;
}
