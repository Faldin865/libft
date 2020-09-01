# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 00:56:13 by gpaul             #+#    #+#              #
#    Updated: 2020/09/01 17:05:13 by gpaul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
CC		= gcc -Wall -Wextra -Werror
RM		= rm -rf

SRC	=               ft_atoi.c                   \
						ft_isalnum.c            \
						ft_isalpha.c            \
						ft_isascii.c            \
						ft_isdigit.c            \
						ft_isprint.c            \
						ft_strchr.c             \
						ft_strlcat.c            \
						ft_strlcpy.c            \
						ft_strlen.c             \
						ft_strncmp.c            \
						ft_strnstr.c            \
						ft_strrchr.c            \
						ft_tolower.c            \
						ft_toupper.c            \
						ft_strdup.c             \


OBJ                 = $(SRC:.c=.o)
INCLUDE             =   libft.h

all: $(NAME)
$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean :
	rm -rf $(OBJ) $(OBJ_BONUS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY: all clean fclean re