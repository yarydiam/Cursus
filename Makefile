# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 19:51:55 by yadiaman          #+#    #+#              #
#    Updated: 2024/04/15 21:47:26 by yadiaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = \
ft_isalpha.c\
ft_isalnum.c\
ft_isdigit.c\
ft_isascii.c\

OBJS = $(SRC:.c=.o)
all:  $(NAME)
$(NAME):$(OBJS)
	ar rsc $(NAME) $(OBJS)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(NAME)
re:	fclean all
.PHONY: fclean clean all re