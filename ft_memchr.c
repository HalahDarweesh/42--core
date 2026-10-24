/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:02:29 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/23 17:20:58 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src;

	if (!s)
		return (NULL);
	i = 0;
	src = (unsigned char *) s;
	while (i < n)
	{
		if (src[i] == (unsigned char) c)
			return ((void *) & src[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
char s[]="ACDEFGHIJK";
char *resul;

resul =ft_memchr(s, 'B',5);
printf("%s",resul);
}*/
