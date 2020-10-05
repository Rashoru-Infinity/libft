#include "libft.h"

void *ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*buf2;

	buf2 = (unsigned char *)buf;
	while (n-- > 0)
		*(buf2++) = (unsigned char)ch;
	return buf;
}
