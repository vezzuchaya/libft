# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/16 17:52:47 by vkakuna           #+#    #+#              #
#    Updated: 2021/10/27 20:05:39 by vkakuna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = 	ft_bzero.c	\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_memcpy.c	\
		ft_memmove.c	\
		ft_memset.c	\
		ft_strlcpy.c	\
		ft_strlen.c	\
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_split.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_strtrim.c \
		ft_strnstr.c \

		
OBJ = $(patsubst %.c,%.o,$(LIST))

OPTFLAGS = -O2
FLAGS = -Wall -Wextra -Werror
RM = rm -f


all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $?

%.o: %.c libft.h
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $(<:.c=.o)

clean:
		$(RM) $(OBJ) *.d

fclean:	clean
		$(RM) $(NAME)
		
re:		fclean all
