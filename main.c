#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	for (int i = -999;i < 1000;i++) {
		printf("%c->%c\n", i, toupper(i));
		printf("%d->%c\n", i, ft_toupper(i));
	}
	return 0;
}
