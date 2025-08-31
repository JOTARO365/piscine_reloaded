# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 22:38:10 by wiaon-in          #+#    #+#              #
#    Updated: 2025/08/27 00:07:14 by wiaon-in         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  := libft.a

FT    := ft_

DOT   := .c

CC      := cc

CFLAGS  := -Wall -Wextra -Werror

SRC_DIR = srcs/

INC_DIR = includes/

SRCS  = putstr strcmp strlen swap

FILES = $(addprefix $(FT), $(addsuffix $(DOT), $(SRCS)))

FILES_DIR = $(addprefix $(SRC_DIR), $(FILES))

OBJS  = $(FILES_DIR:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS) *a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re