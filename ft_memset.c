#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = (unsigned char)c;
		n--;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[50] = "Hello World!";
// 	printf("Before memset: %s\n", str);
// 	ft_memset(str, 'a', 5);
// 	printf("After ft_memset: %s\n", str);
// 	memset(str, 'b', 5);
// 	printf("After memset: %s\n", str);
// 	return 0;
// }