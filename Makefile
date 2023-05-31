# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 23:26:50 by oaboudan          #+#    #+#              #
#    Updated: 2023/05/31 22:23:33 by oaboudan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


HRED = '\e[1;91m'
NC   = '\e[0m'

NAME = push_swap

NAMEB = checker

CC = cc

CFLAGS = -Wall -Werror -Wextra  
  
LIBRARY = mandatory/push_swap.h

LIBRARYB = bonus/push_swap_bonus.h

RM = rm -rf

SRC =	mandatory/main.c \
		mandatory/parse.c \
		mandatory/swap.c \
		mandatory/push.c \
		mandatory/index.c\
		mandatory/utils.c \
		mandatory/utils2.c \
		mandatory/get_to_buttom.c\
		mandatory/get_to_top.c\
		mandatory/sort_3.c\
		mandatory/take_back_stack.c\
		mandatory/sort_stack.c\
		mandatory/sort_5.c\
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


SRCB =	bonus/push_swap_bonus.c \
		bonus/parsing_bonus/parse.c \
		bonus/insractions/swap.c \
		bonus/insractions/push.c \
		bonus/parsing_bonus/utils.c \
		bonus/parsing_bonus/utils2.c \
		bonus/insractions/get_to_buttom.c\
		bonus/insractions/get_to_top.c\
		bonus/libft_42/ft_atoi.c \
		bonus/libft_42/ft_bzero.c \
		bonus/libft_42/ft_calloc.c \
		bonus/libft_42/ft_isalnum.c \
		bonus/libft_42/ft_isalpha.c \
		bonus/libft_42/ft_isascii.c \
		bonus/libft_42/ft_isdigit.c \
		bonus/libft_42/ft_isprint.c \
		bonus/libft_42/ft_itoa.c \
		bonus/libft_42/ft_lstadd_back.c \
		bonus/libft_42/ft_lstadd_front.c \
		bonus/libft_42/ft_lstclear.c \
		bonus/libft_42/ft_lstdelone.c \
		bonus/libft_42/ft_lstlast.c \
		bonus/libft_42/ft_lstnew.c \
		bonus/libft_42/ft_lstsize.c \
		bonus/libft_42/ft_memchr.c \
		bonus/libft_42/ft_memcmp.c \
		bonus/libft_42/ft_memcpy.c \
		bonus/libft_42/ft_memmove.c \
		bonus/libft_42/ft_memset.c \
		bonus/libft_42/ft_putchar_fd.c \
		bonus/libft_42/ft_putendl_fd.c \
		bonus/libft_42/ft_putnbr_fd.c \
		bonus/libft_42/ft_putstr_fd.c \
		bonus/libft_42/ft_split.c \
		bonus/libft_42/ft_strchr.c \
		bonus/libft_42/ft_strdup.c \
		bonus/libft_42/ft_striteri.c \
		bonus/libft_42/ft_strjoin.c \
		bonus/libft_42/ft_strlcat.c \
		bonus/libft_42/ft_strlcpy.c \
		bonus/libft_42/ft_strlen.c \
		bonus/libft_42/ft_strmapi.c \
		bonus/libft_42/ft_strncmp.c \
		bonus/libft_42/ft_strnstr.c \
		bonus/libft_42/ft_strrchr.c \
		bonus/libft_42/ft_strtrim.c \
		bonus/libft_42/ft_substr.c \
		bonus/libft_42/ft_tolower.c \
		bonus/gnl/get_next_line.c \
		bonus/libft_42/ft_strcmp.c 

OBJS = $(SRC:.c=.o)

OBJSB = $(SRCB:.c=.o)

all:$(NAME)

bonus:$(NAMEB)

$(NAME): $(OBJS) $(LIBRARY)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "██████╗ ██╗   ██╗███████╗██╗  ██╗    ███████╗██╗    ██╗ █████╗ ██████╗"
	@echo "██╔══██╗██║   ██║██╔════╝██║  ██║    ██╔════╝██║    ██║██╔══██╗██╔══██╗"
	@echo "██████╔╝██║   ██║███████╗███████║    ███████╗██║ █╗ ██║███████║██████╔╝"
	@echo "██╔═══╝ ██║   ██║╚════██║██╔══██║    ╚════██║██║███╗██║██╔══██║██╔═══╝ "
	@echo "██║     ╚██████╔╝███████║██║  ██║    ███████║╚███╔███╔╝██║  ██║██║     "
	@echo "╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     "
	@echo "making successfully"


$(NAMEB): $(OBJSB) $(LIBRARYB)
	@$(CC) $(CFLAGS) $(OBJSB) -o $(NAMEB)
	@echo "██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗    ██████╗ "
	@echo "██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗   ██╔══██╗"
	@echo "██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝   ██████╔╝"
	@echo "██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝    ██╔══██╗"
	@echo "██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║███████╗██████╔╝"
	@echo "╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝╚══════╝╚═════╝ "                                                                
	@echo "making successfully"
%.o : %.c	$(LIBRARY) $(LIBRARYB)
	@$(CC) $(CFLAGS)  -c $< -o $@
	
clean:
	@$(RM) $(OBJS)
	@$(RM) $(OBJSB)
	@printf ${HRED}"Object files removed successfully 🗑️ \n"$(NC)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(NAMEB)
	@printf ${HRED}"Executables & Object removed successfully 🗑️\n"$(NC)
	
re: fclean all 
