# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 10:36:01 by jrocha-v          #+#    #+#              #
#    Updated: 2023/05/25 10:56:30 by jrocha-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= -o push_swap
CC			= cc -Wall -Wextra -Werror
#AR			= ar -rcs
RM			= rm -rf
SRCS		= ps_main.c ps_split.c
 
OBJS		= ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
