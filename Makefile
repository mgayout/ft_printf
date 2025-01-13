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
FLAG			=	-Wall -Wextra -Werror

SRCDIR	= src
OBJDIR	= obj
HEADIR	= include

SRC		= $(shell find $(SRCDIR) -name '*.c')
OBJ		= $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
HEADER	= $(shell find $(HEADIR) -name '*.h')

LIBFT_DIR		=	libft-main
LIBFT_URL		=	https://github.com/mgayout/libft/archive/refs/heads/main.tar.gz
LIBFT_AR		=	libft.a

all:	$(NAME)

$(NAME):	$(LIBFT_AR) $(OBJ)
					@ar -rc $(NAME) $(OBJ)

$(OBJDIR)/%.o : $(SRCDIR)/%.c $(HEADER)
					@mkdir -p $(dir $@)
					@gcc $(FLAG) -c $< -o $@

$(LIBFT_AR): 
					@curl -L $(LIBFT_URL) -o libft.tar.gz
					@tar -xzf libft.tar.gz
					@rm libft.tar.gz
					@make -C $(LIBFT_DIR)
					@cp $(LIBFT_DIR)/$(LIBFT_AR) .

clean:
					@rm -rf	$(OBJDIR)
					@make clean -C $(LIBFT_DIR)

fclean: clean
					@rm -rf $(NAME)
					@rm -rf $(LIBFT_DIR)
					@rm -rf $(LIBFT_AR)

re:	fclean all

.PHONY: all clean fclean re