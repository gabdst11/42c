/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:30:52 by gdumais-          #+#    #+#             */
/*   Updated: 2024/03/13 12:26:23 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	format(va_list args, const char format, int *count)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format == 'u')
		uputnbr(va_arg(args, unsigned int), count);
	else if (format == '%')
		ft_putchar('%', count);
	else if (format == 'x' || format == 'X')
		putnbr_hex(va_arg(args, int unsigned), count, format);
	else if (format == 'p')
		ft_putptr(va_arg(args, void *), count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *str + 1)
		{
			format(args, *(str + 1), &count);
			str++;
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
// 	printf("\n%d\n", printf("allo%pyo", "allo"));
// 	printf("\n%d\n", ft_printf("allo%pyo", "llo"));
// }