#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	for (int i = 0;i < 256;i++) {
		printf("%d->%d\n", i, isdigit(i));
		//printf("%d->%d\n", i, ft_isdigit(i));
	}
	return 0;
}
