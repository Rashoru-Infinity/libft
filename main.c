#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str1[] = "string1";
	char str2[10] = "";
	printf("%s\n", (char *)ft_memccpy(str1,str2,'r', 7));
	return 0;
}
