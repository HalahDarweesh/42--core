#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

int main(void)
{
    char s1[] = "ABCDE";
    char s2[] = "ABXDE";
    char s3[] = "ABCDE";

    printf("%d\n", ft_memcmp(s1, s2, 5));
    printf("%d\n", ft_memcmp(s1, s3, 5));
    printf("%d\n", ft_memcmp(s1, s2, 2));
    return (0);
}