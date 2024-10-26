int ft_isalnum(int c)
{
	return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", ft_isalnum(' '));
// 	printf("%d\n", ft_isalnum('['));
// 	return (0);
// }