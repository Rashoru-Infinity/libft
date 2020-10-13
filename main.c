#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char **strs;
	char *str1 = "abc\n\ndef\ng";
	char str2 = '\n';
	printf("%zu\n", sizeof(char *));
	printf("%zu\n", sizeof(char));
	if ((strs = ft_split(str1, str2)))
	{
		for (int i = 0;strs[i] != NULL;++i)
		{
			printf("%s\n", strs[i]);
			free(strs[i]);
		}
		free(strs);
	}
	return 0;
}
