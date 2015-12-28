# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fviolin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 17:41:56 by fviolin           #+#    #+#              #
#    Updated: 2015/12/09 17:21:47 by fviolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memccpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strcat.c\
	ft_strchr.c\
	ft_strcmp.c\
	ft_strcpy.c\
	ft_strdup.c\
	ft_strlcat.c\
	ft_strlen.c\
	ft_strncat.c\
	ft_strncmp.c\
	ft_strncpy.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strstr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_isspace.c\
	ft_putendl.c\
	ft_strsplit.c\
	ft_strsub.c\
	ft_strnew.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_putchar.c\
	ft_putchar_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_strclr.c\
	ft_striter.c\
	ft_striteri.c\
	ft_strmap.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_memalloc.c\
	ft_memdel.c\
	ft_strdel.c\
	ft_strmapi.c\
	ft_strsub.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strsplit.c\
	ft_itoa.c\
	ft_isspace.c\
	ft_reverse.c\
	ft_lstadd.c\
	ft_lstdelone.c\
	ft_lstiter.c\
	ft_lstdel.c\
	ft_lstnew.c\
	ft_lstmap.c\
	ft_nbrlen.c\
	ft_swap.c
	
OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)
	
$(NAME):	
	gcc $(CFLAGS) -c $(SRCS) -I libft.h
	ar r $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY: all clean fclean re
