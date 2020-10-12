#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char *trim;
	char *str1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *str2 = " \n\t";
	if ((trim = ft_strtrim(str1,str2)))
	{
		printf("%s\n", trim);
		free(trim);
	}
	return 0;
}
