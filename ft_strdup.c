#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	str = (char *)malloc(len);
	if (str == NULL)
		return (NULL);
	return (ft_memcpy(str, s, len));
}