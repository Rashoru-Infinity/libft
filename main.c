#include <stdio.h>
#include "libft.h"
#include <strings.h>

int main(void) {
	char str[] = "0123456789";
	bzero(str + 2, 5);
	printf("%s\n", str);
	for (int i = 0;i < 10;i++) {
		printf("%d,", str[i]);
	}
	printf("\n");
	return 0;
}
