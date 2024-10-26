int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('A'));
// 	printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", ft_isascii(' '));
// 	printf("%d\n", ft_isascii('['));
// 	printf("%d\n", ft_isascii(128));
// 	return (0);
// }