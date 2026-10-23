#include "libft.h"
void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    while(i < n)
    {
        ((unsigned char *)s)[i] = 0;
        i++;
    }
}



/*int	main(void)
{
	char	str[] = "hello";
	int		i;

	printf("Before: %s\n", str);
	ft_bzero(str, 3);
	printf("After:  %s\n", str);
	i = 0;
	while (i < 6)
	{
		printf("Byte %d: %d\n", i, (unsigned char)str[i]);
		i++;
	}
	return (0);
}*/


