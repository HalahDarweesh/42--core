
#include "libft.h"
#include <stdio.h>
size_t ft_strlcpy(char *dest, char *src , size_t size)
{
    size_t i;

    i = 0;
    if(size > 0)
    {
        while(src[i] && i < size -1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i]= '\0';
    }
    return (ft_strlen(src));
}

int main(void)
{
    char    dest[10];
    printf("%zu" , ft_strlcpy(dest, "helloo" ,sizeof(dest)));
    return (0);
}