#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void) {
	char str[] = "ubuntu";
	char search = 'u';
	printf("%p\n", strrchr(str, search));
	printf("%p\n", ft_strrchr(str, search));	
	printf("%p\n", strrchr(str, '\0'));
	printf("%p\n", ft_strrchr(str, '\0'));	
	return 0;
}
