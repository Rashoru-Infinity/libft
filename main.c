#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str[] = "string";
	char search = 'i';
	printf("%p\n", strchr(str, search));
	printf("%p\n", ft_strchr(str, search));	
	printf("%p\n", strchr(str, '\0'));
	printf("%p\n", ft_strchr(str, '\0'));	
	return 0;
}
