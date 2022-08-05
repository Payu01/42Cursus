# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 10:11:08 by fmunoz-a          #+#    #+#              #
#    Updated: 2022/08/05 12:40:23 by fmunoz-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME    =   push_swap
CC      = gcc
CFLAGS  = -Werror -Wall -Wextra

SRCS = push_swap.c \
		checkers.c \
		error.c \
		filler.c \
		list_act1.c \
		mount_board.c \
		ordering_actions.c \
		orders.c \
		orders2.c \
		searchers.c \
		sort_selector.c \
		sorters.c 


#OBJS        =   ${SRCS:.c=.o}
$(NAME): #$(OBJS)
	make -C ./libft
	${CC} ${CFLAGS} $(SRCS) -I ./libft -L ./libft -l ft -o ${NAME}
all: $(NAME)
clean:
	make clean -C ./libft
	rm -f $(OBJS)
fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)
re: fclean all
.PHONY:     all clean fclean re