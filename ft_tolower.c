#include "libft.h"
int ft_tolower(int c)
{
    if(c >= 'A' && c<='Z')
        return (c + 32);
    else 
    return (c);
}
int main(void)
{
    printf("%c" , ft_tolower('D'));
    return (0);
}