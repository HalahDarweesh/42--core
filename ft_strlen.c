#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t  i;

    i = 0 ;
    while (s[i]){
        i++;
    }
    return (i);

}
/*int main(void)
{
    char *s="hala   222";
    printf("%zu",ft_strlen(s));
    return (0);
}*/