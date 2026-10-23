#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t len ;
    char    *copy;

    len = ft_strlen(s);
    copy = malloc(len + 1);
    if (!copy)
        return (NULL);
    ft_memcpy(copy, s, len+1);

    return (copy);

}

int	main(void)
{
	char	*copy;

	copy = ft_strdup("Hello");
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
	return (0);
}