# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 10:36:01 by jrocha-v          #+#    #+#              #
#    Updated: 2023/08/08 10:22:35 by jrocha-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -rf
OBJS		= main_utils.o main_sort.o check_args.o check_args_utils.o stack_create.o shadow_sort.o op_swap.o op_push.o op_rotate.o op_rev_rotate.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) main.c $(OBJS) -o $(NAME) && ./push_swap  87 -487 781 -100 101 0 1
%.o: %.c
	$(CC) $(CFLAGS) -c $<
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all

.SILENT: