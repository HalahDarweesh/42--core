
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last);
}

int	main(void)
{
	char	*s;
	char	*result;

	s = "hello";
	result = ft_strrchr(s, '\0');
	if (result)
		printf("%s\n", result);
	else
		printf("Not found\n");
	return (0);
}