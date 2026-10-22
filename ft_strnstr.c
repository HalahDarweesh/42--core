
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j]
			&& big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}


#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_strnstr("42AmmanCore55", "Amman", 13);
	printf("Test 1: %s\n", result ? result : "NULL");

	result = ft_strnstr("42AmmanCore", "Core", 11);
	printf("Test 2: %s\n", result ? result : "NULL");

	result = ft_strnstr("42AmmanCore", "Core", 5);
	printf("Test 3: %s\n", result ? result : "NULL");

	result = ft_strnstr("hello", "", 5);
	printf("Test 4: %s\n", result ? result : "NULL");

	return (0);
}

