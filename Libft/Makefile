# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 19:39:21 by dalvaro-          #+#    #+#              #
#    Updated: 2021/04/19 15:55:57 by dalvaro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		=	ft_atoi.c\
				ft_memset.c\
				ft_bzero.c\
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isprint.c\
				ft_isascii.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strlen.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_strnstr.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memccpy.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_strmapi.c\
				ft_split.c\
				ft_itoa.c\
				
SRCS_BONUS	=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c

OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)
CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra
# Use  "ar rcs" instead of "ar rc + ranlib"
AR = ar rcs

# Change this Old-Fashioned Suffix Rules for the current one
#.c.o:
#	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): 	$(OBJS)
			$(AR)  $(NAME) $(OBJS)

bonus: 		$(NAME) $(OBJS_BONUS)
			$(AR) $(NAME) $(OBJS_BONUS)

all:		$(NAME)

clean:
			${RM} ${OBJS} $(OBJS_BONUS)

fclean: 	clean
			$(RM) $(NAME)
			
re:			fclean all

# We need include this target for libft-unit-test Tester
so:
	$(CC) -fPIC -c $(CFLAGS) $(SRCS) 0-main.c
	gcc -shared -o libft.so $(OBJS) 0-main.o

.PHONY:		all bonus clean fclean re