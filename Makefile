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

NAME = minitalk

all : $(NAME)

$(NAME) :
	make -C ./libft all
	make -C ./server all
	make -C ./client all

clean :
	cd ./libft && make clean
	cd ./server && make clean
	cd ./client && make clean

fclean : clean
	cd ./libft && make fclean
	cd ./server && make fclean
	cd ./client && make fclean

re: fclean all

.PHONY: all clean fclean re