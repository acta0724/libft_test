#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n > 0)
		{
			*(--d) = *(--s);
			n--;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s1[] = "Hello, World!";
// 	char s2[100];
// 	ft_memmove(s2, s1, 13);
// 	printf("%s\n", s2);
// 	char s4[] = "Hello, World!";
// 	char s3[100];
// 	memmove(s3, s4, 13);
// 	printf("%s\n", s3);
// 	return (0);
// }