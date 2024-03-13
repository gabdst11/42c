/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uputnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:54:16 by gdumais-          #+#    #+#             */
/*   Updated: 2024/03/13 12:19:26 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	uputnbr(unsigned int n, int *count)
{
	unsigned long	nbr;

	nbr = n;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
	else
	{
		ft_putchar(nbr + '0', count);
	}
}
