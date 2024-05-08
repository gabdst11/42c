# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 12:29:40 by gdumais-          #+#    #+#              #
#    Updated: 2024/05/01 20:09:42 by gdumais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= so_long
CC					= gcc
RM					= rm -f
CFLAGS			= -Wall -Wextra -Werror 
LIBFT			= ./libft/libft.a
INC			=	-I ./inc -I ./libft
SRCS			= mapread.c main.c checkmap.c
OBJS		= $(SRCS:.c=.o)


all:	$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	
$(LIBFT):
	$(MAKE) -C ./libft

clean:
				$(RM) $(OBJS)
				$(MAKE) clean -C ./libft

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re