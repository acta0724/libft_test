#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);	
}

// int main()
// {
// 	ft_putendl_fd("hello world", 1);
// 	return (0);
// }