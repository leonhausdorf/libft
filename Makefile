# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 13:02:30 by lhausdor          #+#    #+#              #
#    Updated: 2021/07/07 13:26:15 by lhausdor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_itoa.c ft_memcpy.c ft_memmove.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strtrim.c \
			ft_substr.c ft_tolower.c ft_toupper.c ft_memchr.c ft_memcmp.c ft_memset.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strmapi.c ft_striteri.c

OBJECTS = $(subst .c,.o,$(SOURCE))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCE)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS) e.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re