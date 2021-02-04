# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wrudy <wrudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/20 22:43:16 by wrudy             #+#    #+#              #
#    Updated: 2020/05/29 18:40:25 by wrudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

LIB	=	ar rcs

SRC = ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strmapi.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_itoa.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_calloc.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_strnstr.c\

BONUSSRC =	ft_lstadd_back.c\
        ft_lstadd_front.c\
        ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstlast.c\
		ft_lstnew.c\
		ft_lstsize.c\

OBJ	=	$(SRC:.c=.o)

BONUSOBJ	=	$(BONUSSRC:.c=.o)

HEADER		=	libft.h

CC			=	gcc

CWFLAGS		=	-Wall -Wextra -Werror

COFLAG		=	-c

CNAMEFLAG	=	-o

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(HEADER)
				$(LIB) $(NAME) $?

%.o			:	%.c
				$(CC) $(CWFLAGS) $(COFLAG) $< $(CNAMEFLAG) $@

clean		:
				rm -f $(OBJ) $(BONUSOBJ)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

bonus		:	$(BONUSOBJ)
				$(LIB) $(NAME) $?
