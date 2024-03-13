/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:55:45 by gdumais-          #+#    #+#             */
/*   Updated: 2024/03/13 12:25:00 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	putnbr_p(int unsigned long n, int *count)
{
	char					*str;

	str = "0123456789abcdef";
	if (n < 0)
	{
		n *= -1;
	}
	if (n > 15)
	{
		putnbr_p(n / 16, count);
		putnbr_p(n % 16, count);
	}
	else
		ft_putchar(str[n], count);
}

void	ft_putptr(void *ptr, int *count)
{
	ft_putstr("0x", count);
	putnbr_p((unsigned long) ptr, count);
}
