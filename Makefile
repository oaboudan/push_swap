# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 23:26:50 by oaboudan          #+#    #+#              #
#    Updated: 2023/05/23 23:58:38 by oaboudan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


HRED = '\e[1;91m'
NC   = '\e[0m'

NAME = push_swap

# NAMEB = so_long_bonus

CC = cc

CFLAGS = -Wall -Werror -Wextra   
  
LIBRARY = mandatory/push_swap.h

#LIBRARYB = bonus/includes/so_long_bonus.h

RM = rm -rf

SRC =	mandatory/main.c \
		mandatory/parse.c \
		mandatory/swap.c \
		mandatory/push.c \
		mandatory/get_to_buttom.c\
		mandatory/get_to_top.c\
		mandatory/sort_3.c\
		mandatory/sort_4.c\
		libft_42/ft_atoi.c \
		libft_42/ft_bzero.c \
		libft_42/ft_calloc.c \
		libft_42/ft_isalnum.c \
		libft_42/ft_isalpha.c \
		libft_42/ft_isascii.c \
		libft_42/ft_isdigit.c \
		libft_42/ft_isprint.c \
		libft_42/ft_itoa.c \
		libft_42/ft_lstadd_back.c \
		libft_42/ft_lstadd_front.c \
		libft_42/ft_lstclear.c \
		libft_42/ft_lstdelone.c \
		libft_42/ft_lstlast.c \
		libft_42/ft_lstnew.c \
		libft_42/ft_lstsize.c \
		libft_42/ft_memchr.c \
		libft_42/ft_memcmp.c \
		libft_42/ft_memcpy.c \
		libft_42/ft_memmove.c \
		libft_42/ft_memset.c \
		libft_42/ft_putchar_fd.c \
		libft_42/ft_putendl_fd.c \
		libft_42/ft_putnbr_fd.c \
		libft_42/ft_putstr_fd.c \
		libft_42/ft_split.c \
		libft_42/ft_strchr.c \
		libft_42/ft_strdup.c \
		libft_42/ft_striteri.c \
		libft_42/ft_strjoin.c \
		libft_42/ft_strlcat.c \
		libft_42/ft_strlcpy.c \
		libft_42/ft_strlen.c \
		libft_42/ft_strmapi.c \
		libft_42/ft_strncmp.c \
		libft_42/ft_strnstr.c \
		libft_42/ft_strrchr.c \
		libft_42/ft_strtrim.c \
		libft_42/ft_substr.c \
		libft_42/ft_tolower.c \
		libft_42/ft_toupper.c



OBJS = $(SRC:.c=.o)

OBJSB = $(SRCB:.c=.o)

all:$(NAME)

bonus:$(NAMEB)

$(NAME): $(OBJS) $(LIBRARY)
	@$(CC) $(CFLAGS) $(OBJS)  -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@echo "nadiiiii"

%.o : %.c	$(LIBRARY) #$(LIBRARYB)
	@$(CC) $(CFLAGS) -Imlx -c $< -o $@
	
clean:
	@$(RM) $(OBJS)
	@printf ${HRED}"Object files removed successfully 🗑️ \n"$(NC)

fclean: clean
	@$(RM) $(NAME)
	@printf ${HRED}"Executables & Object removed successfully 🗑️\n"$(NC)
	
re: fclean all 
