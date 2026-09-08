# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edidier <edidier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 16:51:42 by edidier           #+#    #+#              #
#    Updated: 2025/05/16 13:57:50 by edidier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFTDIR	= ./libft
LIBFTNAME	= $(LIBFTDIR)/libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_printf.c ft_printchar.c ft_printstring.c ft_printptr.c \
				ft_printint.c ft_printunsigned.c ft_printhex.c ft_utils.c

OBJS		= $(SRCS:.c=.o)

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME): 	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
			rm -f $(OBJS)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re