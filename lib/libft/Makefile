# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 10:29:24 by oumali            #+#    #+#              #
#    Updated: 2021/10/06 10:44:54 by oumali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_bzero.c  ft_isalnum.c ft_isalpha.c \
          ft_isascii.c ft_isdigit.c ft_isprint.c \
          ft_memcpy.c ft_memmove.c ft_memset.c  \
         	ft_strlen.c \
          ft_tolower.c ft_toupper.c \
			
HEADER	= ./libft.h
OBJS	= $(SRCS:.c=.o)
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(HEADER)

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)
			$(LIBR) $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)	

fclear:		clean
			$(RM) $(NAME)

re:			fclean all

norm:
			norminette -R CheckForbiddenSourceHeader */*.c
			norminette -R CheckDefine */*.h

.PHONY:		all clean fclean re .c.o norm
