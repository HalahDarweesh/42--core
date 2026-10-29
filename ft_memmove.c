/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:02:51 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/29 10:19:54 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if ((uintptr_t)d < (uintptr_t)s)
	{
		i = 0;
		while (i < n)
			d[i++] = s[i - 1];
	}
	else
	{
		i = n;
		while (i > 0)
			d[--i] = s[i];
	}
	return (dest);
}

/*int	main(void)
{
	char	*str;

	str = "ABCDEFGH";
	ft_memmove(str + 2, str, 5);
	printf("%s\n", str);
	return (0);
}*/
