# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alramire <alramire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 11:33:51 by alramire          #+#    #+#              #
#    Updated: 2024/04/29 13:38:59 by alramire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
FLAGS = -Wall -Wextra -Werror
# SRCS = *.c
SRCS = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_strdup.c ft_substr.c ft_strjoin.c\
# OBJS = *.o
OBJS = $(SRCS:.c=.o) # This is a substitution pattern, where the files ends with c it replaces with o
AR = ar rc
RM = rm -f
LIB	= ranlib

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

#$(NAME):
#	$(CC)  $(FLAGS) $(SRCS)
#	$(AR)  $(NAME) $(OBJS)
#	$(LIB) $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
