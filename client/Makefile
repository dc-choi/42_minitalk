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

CLIENT = client

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

CLIENT_FILES = client \

CLIENT_SRCS_DIR = ./
CLIENT_SRCS = $(addprefix $(CLIENT_SRCS_DIR), $(addsuffix .c, $(CLIENT_FILES)))

CLIENT_OBJS_DIR = ./
CLIENT_OBJS = $(addprefix $(CLIENT_OBJS_DIR), $(addsuffix .o, $(CLIENT_FILES)))

all: $(CLIENT)

.c.o: $(CLIENT_SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
	cp ../libft/libft.a ./

$(CLIENT): $(CLIENT_OBJS)
	$(CC) $(CFLAGS) -o $@ $< libft.a

clean:
	$(RM) $(CLIENT_OBJS)

fclean: clean
	$(RM) $(CLIENT) libft.a

re: fclean all

.PHONY: all clean fclean re