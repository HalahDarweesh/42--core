#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t  total;
    void     *ptr;

    /*Imagine nmemb * size is too large for size_t to represent. The multiplication can wrap around and produce a smaller number than intended.
       Your program might then allocate too little memory.
       This condition prevents that*/
    if (size != 0 && nmemb > SIZE_MAX / size) 
		return (NULL); 

    total = nmemb * size;
    ptr = malloc(total);
    if(!ptr)
        return (NULL);
    ft_bzero(ptr, total);
    return (ptr);
}

int main(void)
{
	int	*arr;
	int	i;

	arr = ft_calloc(5, sizeof(int));
	if (!arr)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}