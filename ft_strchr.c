#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

int	main(void)
{
	char	*s;
	//char	*result;

	s = "hello";
	//result = ft_strchr(s, 'f');
	//printf("%s\n", result);
	if (ft_strchr(s, 'f'))
	printf("Found\n");
else
	printf("Not found\n");
    return (0);
}