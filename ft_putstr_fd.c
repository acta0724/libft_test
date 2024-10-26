#include <unistd.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int size;

	if(s == NULL)
		return ;
	size = write(fd, s, ft_strlen(s));
	(void)size;
}

// int main()
// {
// 	ft_putstr_fd("hello world", 1);
// 	return (0);
// }