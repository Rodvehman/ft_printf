# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rovehman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/19 12:33:21 by rovehman          #+#    #+#              #
#    Updated: 2026/06/19 12:33:25 by rovehman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= -rm -rf

SRCS	= ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_pointer.c \
		ft_print_hexa.c \
		ft_print_nbr.c \
		ft_strlen.c \
		ft_check_format.c \
		ft_print_unsigned_int.c


OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
