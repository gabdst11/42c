# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdumais- <gdumais-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #

#    Created: 2024/02/20 10:48:08 by gperreau          #+#    #+#              #
#    Updated: 2024/03/01 16:33:28 by gdumais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
SRCS			=	ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c
OBJS		= $(SRCS:.c=.o)
BONUS			=	ft_lstadd_front.c \
					ft_lstnew.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					# ft_lstmap.c \
					
					
BONUS_OBJS	= $(BONUS:.c=.o)
all:			$(NAME)
$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)
 bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
.PHONY:			all clean fclean re bonus