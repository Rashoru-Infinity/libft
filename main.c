#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char str[] = "string";
	char strnull[] = "";
	char *p = ft_strdup(str);
	if (p){
		printf("%s\n", p);
		free(p);
	}
	p = ft_strdup(strnull);
	if(p){
		printf("%s\n", p);
		free(p);
	}
	return 0;
}
