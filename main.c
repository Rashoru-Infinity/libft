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
	printf("%p\n", strchr(str, 'a'));
	printf("%p\n", ft_strchr(str, 'a'));	
	return 0;
}
