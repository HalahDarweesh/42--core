/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:22:39 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/24 17:35:14 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_numlen(long n)
{
	size_t	len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	size_t	i;
	int		neg;
	char	*str;

	num = n;
	neg = (num < 0);
	if (neg)
		num = -num;
	len = ft_numlen(num) + neg;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = len;
	while (i > (size_t)neg)
	{
		i--;
		str[i] = num % 10 + '0';
		num /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

/*
int	main(void)
{
	char	*str;

	str = ft_itoa(0);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(42);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(-42);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(INT_MAX);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(INT_MIN);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
