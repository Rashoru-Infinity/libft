#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char c = 0;
	for (int i = 0;i < 255;i++) {
		//printf("%d\n", isalpha(c));
		printf("%d\n", ft_isalpha(c));
		++c;
	}
	return 0;
}
