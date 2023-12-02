# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 10:59:59 by mgayout           #+#    #+#              #
#    Updated: 2023/12/01 10:59:59 by mgayout          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -rf
SRC 			=	ft_printf

SRC_A			=	$(addsuffix .c, ${SRC})

OBJ				=	$(SRC_A:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ) 
					ar -rc $(NAME) $(OBJ)

clean:
					$(RM) $(OBJ)

fclean: 		clean
					$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re