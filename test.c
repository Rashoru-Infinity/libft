#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "abcdefg";
	char str2[30];
	char *p = (char *)memccpy(str2, str1, 'd', 7);
	printf("%p\n", str1);
	printf("%s\n", p);
	printf("%s\n", str2);
}
