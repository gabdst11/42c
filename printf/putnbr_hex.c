/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:44:32 by gdumais-          #+#    #+#             */
/*   Updated: 2024/03/11 17:33:13 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putnbr_hex(int unsigned n, int *count, char format)
{
	char			*str;
	unsigned int	nbr;

	if (format == 'x')
	{
		nbr = (unsigned long)n;
		str = "0123456789abcdef";
	}
	if (format == 'X')
	{
		nbr = (unsigned long)n;
		str = "0123456789ABCDEF";
	}
	if (n < 0)
	{
		n *= -1;
	}
	if (n > 15)
	{
		putnbr_hex(n / 16, count, format);
		putnbr_hex(n % 16, count, format);
	}
	else
		ft_putchar(str[n], count);
}
