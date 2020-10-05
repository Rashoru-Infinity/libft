#include "libft.h"

void bzero(void *s, size_t n)
{
	while (n-- > 0)
		*(unsigned char *)s = 0;
}
