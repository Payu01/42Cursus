# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 09:12:35 by fmunoz-a          #+#    #+#              #
#    Updated: 2022/06/07 09:31:02 by fmunoz-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_printf_utils.c \
		char_printers.c \
		base_conversion.c \

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror
$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
