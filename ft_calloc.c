#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void *ptr;

	total_size = num * size;
	if (num != 0 && total_size / num != size)
		return NULL;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return NULL;
	ft_bzero(ptr, total_size);
	return ptr;
}

// #include <stdio.h>
// int main()
// {
// 	char *s = (char *)ft_calloc(10, sizeof(char));
// 	if (s == NULL)
// 	{
// 		printf("Failed to allocate memory\n");
// 		return 1;
// 	}
// 	printf("%s\n", s);
// 	free(s);
// 	return 0;
// }