# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iwillens <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 18:49:08 by iwillens          #+#    #+#              #
#    Updated: 2020/04/28 21:26:03 by iwillens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_memcpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strncmp.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_putstr_fd.c \
			ft_putchar_fd.c \
			ft_stridentical.c \
			ft_strcat.c \
			ft_strcatx.c \
			ft_strcatxl.c \
			ft_strcatxr.c \
		  	ft_findstr.c \
		  	ft_strtrunc.c \
			ft_removequotes.c \
			ft_join.c \
			ft_lastchar.c \
			ft_strfree2d.c \
			ft_get_word.c \
			ft_strcatchrx.c \
			ft_strx.c 

OBJS = $(patsubst %.c, %.o, $(SRCS))

BONUSSRC = ft_lstnew.c \
		   ft_lstadd_front.c \
		   ft_lstsize.c \
		   ft_lstlast.c \
		   ft_lstadd_back.c \
		   ft_lstdelone.c \
		   ft_lstclear.c \
		   ft_lstiter.c \
		   ft_lstmap.c \
		   ft_islower_bonus.c \
		   ft_isspace_bonus.c \
		   ft_isupper_bonus.c \
		   ft_putchar_bonus.c \
		   ft_putnbr_bonus.c \
		   ft_putstr_bonus.c \
		   ft_isblank_bonus.c \
		   ft_putendl_bonus.c

BONUSOBJ = $(patsubst %.c, %.o, $(BONUSSRC))

all : bonus

$(NAME) : $(OBJS)
	ar -r $(NAME) $(OBJS)

OBJS : $(SRCS)
	clang -Wall -Wextra -Werror -Wno-nullability-completeness -g -c $(SRCS) -o $(OBJS)

bonus : $(BONUSOBJ) $(NAME)
	ar  -r $(NAME) $(BONUSOBJ)

BONUSOBJ : $(BONUSSRC)
	clang -Wall -Wextra -Werror -Wno-nullability-completeness -g -c $(BONUSSRC) -o $(BONUSOBJ)

clean: 
	@rm -f $(OBJS) $(BONUSOBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean libft.a
