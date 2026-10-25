/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:17:32 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/25 19:17:32 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_putnbr_recursive(long n, int fd)
{
	if (n > 9)
		ft_putnbr_recursive(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = -l;
	}
	ft_putnbr_recursive(l, fd);
}
