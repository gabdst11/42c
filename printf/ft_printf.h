/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:34:19 by gdumais-          #+#    #+#             */
/*   Updated: 2024/03/13 12:12:58 by gdumais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include "libft/libft.h"

void	uputnbr(unsigned int n, int *count);
void	putnbr_hex(int unsigned n, int *count, char format);
void	ft_putptr(void *ptr, int *count);
int		ft_printf(const char *str, ...);
#endif