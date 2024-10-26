#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	int size;

	size = write(fd, &c, 1);
	(void)size;
}

// int main()
// {
// 	ft_putchar_fd('a', 1);
// 	return (0);
// }