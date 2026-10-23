
#include "libft.h"
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    unsigned char *dest;
    const unsigned char *source;

    if (!src && !dst)
        return (NULL);
    dest = (unsigned char *)dst;
    source = (const unsigned char *)src;
    if (dest < source)
    {
        i = 0;
        while (i < len)
        {
            dest[i] = source[i];
            i++;
        }
    }
    else
    {
        i = len;
        while (i > 0)
        {
            i--;
            dest[i] = source[i];
        }
    }
    return (dst);
}

int main(void)
{
    char str[] = "ABCDEFGH";

    ft_memmove(str + 2, str, 5);
    printf("%s\n", str);
    return (0);
}
