int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_isprint('a'));
// 	printf("%d\n", ft_isprint('A'));
// 	printf("%d\n", ft_isprint('0'));
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('['));
// 	printf("%d\n", ft_isprint(127));
// 	return (0);
// }