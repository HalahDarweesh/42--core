/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:02:51 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/23 17:20:49 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	if (!dst && !src)
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
		return (dst);
	}
	i = len;
	while (i > 0)
	{
		i--;
		dest[i] = source[i];
	}
	return (dst);
}

/*int	main(void)
{
	char	*str;

	str = "ABCDEFGH";
	ft_memmove(str + 2, str, 5);
	printf("%s\n", str);
	return (0);
}*/
