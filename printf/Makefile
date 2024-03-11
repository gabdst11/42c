# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 13:24:15 by gdumais-          #+#    #+#              #
#    Updated: 2024/03/11 17:24:06 by gdumais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a
CC				= gcc
RM				= rm -f
CFLAGS			= -c -Wall -Wextra -Werror -I.
LIBFT			= ./libft/libft.a
SRCS			=	ft_printf.c uputnbr.c putnbr_hex.c ft_putptr.c
OBJS		= $(SRCS:.c=.o)
					
					
all:			$(NAME)

$(NAME):		$(OBJS)
				$(MAKE) -C ./libft
				cp libft/libft.a $(NAME)
				$(CC) $(CFLAGS) $(SRCS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)
				$(MAKE) clean -C ./libft

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus