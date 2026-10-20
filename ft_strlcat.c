#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	src_len = ft_strlen(src);
	while (dest_len < size && dst[dest_len])
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	while (src[i] && dest_len + 1 < size)
	{
		dst[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dst[dest_len] = '\0';
	return (dest_len + src_len - i);
}

   
int	main(void)
{
	char	dst[8] = "Hello";
	size_t	result;

	result = ft_strlcat(dst, " World", sizeof(dst));
	printf("Destination: %s\n", dst);
	printf("Return value: %zu\n", result);
	return (0);
}
