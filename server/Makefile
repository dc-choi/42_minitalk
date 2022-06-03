# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 18:05:50 by donchoi           #+#    #+#              #
#    Updated: 2022/06/02 18:05:50 by donchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SERVER_FILES = server \

SERVER_SRCS_DIR = ./
SERVER_SRCS = $(addprefix $(SERVER_SRCS_DIR), $(addsuffix .c, $(SERVER_FILES)))

SERVER_OBJS_DIR = ./
SERVER_OBJS = $(addprefix $(SERVER_OBJS_DIR), $(addsuffix .o, $(SERVER_FILES)))

all: $(SERVER)

.c.o: $(SERVER_SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
	cp ../libft/libft.a ./

$(SERVER): $(SERVER_OBJS)
	$(CC) $(CFLAGS) -o $@ $< libft.a

clean:
	$(RM) $(SERVER_OBJS)

fclean: clean
	$(RM) $(SERVER) libft.a

re: fclean all

.PHONY: all clean fclean re