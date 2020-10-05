#include "libft.h"

void *ft_memset(void *buf, int ch, size_t n)
{
	void	*buf2;
	size_t	offset;

	buf2 = buf;
	offset = 0;
	while (offset < n)
	{
		*((int *)(buf2 + offset)) = ch;
		++offset;
	}
	return buf;
}
