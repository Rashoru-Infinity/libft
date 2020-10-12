#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char *concatenation;
	char *str1 = "aaa";
	char *str2 = "bbb";
	if ((concatenation = ft_strjoin(str1,str2)))
	{
		printf("%s\n", concatenation);
		free(concatenation);
	}
	return 0;
}
