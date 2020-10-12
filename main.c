#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char *trim;
	char *str1 = "\nabcdef\tghijklmnopqrstuvwxyz\n";
	char *str2 = "\n";
	if ((trim = ft_strtrim(str1,str2)))
	{
		printf("%s\n", trim);
		free(trim);
	}
	return 0;
}
