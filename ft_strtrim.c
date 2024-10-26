#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != 0)
		i++;
	while (len > i && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	str = (char *)malloc(len - i + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[i], len - i + 1);
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char *s1 = "   Hello World!   ";
// 	char *set = " ";
// 	printf("%s\n", ft_strtrim(s1, set));
// 	return (0);
// }