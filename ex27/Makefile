# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/27 01:37:05 by wiaon-in          #+#    #+#              #
#    Updated: 2025/08/27 01:37:27 by wiaon-in         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = ft_display_file
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS    = ft_display_file.c
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c ft_display_file.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re