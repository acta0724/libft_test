#include <stddef.h>
#include <stdlib.h>

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*allocate_and_copy_word(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			strs[j] = allocate_and_copy_word(s + i, c);
			if (strs[j] == NULL)
				return (NULL);
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	strs[j] = NULL;
	return (strs);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "Hello World!";
// 	char **strs = ft_split(s, ' ');
// 	int i = 0;
// 	while (strs[i] != NULL)
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// 	while(i >= 0)
// 	{
// 		free(strs[i]);
// 		i--;
// 	}
// 	free(strs);
// 	return (0);
// }