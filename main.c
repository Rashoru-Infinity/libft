#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	for (int i = -10;i < 15;i++) {
		printf("org : %d->%d\n", i, isdigit(i));
		printf("ft : %d->%d\n", i, ft_isdigit(i));
	}
	return 0;
}
