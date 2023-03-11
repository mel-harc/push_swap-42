# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 15:38:08 by mel-harc          #+#    #+#              #
#    Updated: 2023/03/11 21:47:16 by mel-harc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  push_swap.c ft_check.c libft/ft_split.c libft/ft_strchr.c libft/ft_strlen.c \
		libft/ft_atoi.c libft/ft_isdigit.c libft/ft_strjoin.c libft/ft_strdup.c libft/ft_substr.c \
		ft_stack.c libft/ft_lstnew.c libft/ft_lstaddback.c libft/ft_lstiter.c \
		ft_swap.c libft/ft_lstmin.c libft/ft_lstmax.c libft/ft_lstiter1.c libft/ft_push.c \
		libft/ft_update_index.c ft_swap_b.c ft_rank.c ft_bogo_sort.c  ft_check_dup.c

FLAGS = -Wall -Werror -Wextra

NAME = push_swap

CC = cc

RM = rm -rf

HEADER = push_swap.h

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c $(HEADER)
		@$(CC) $(FLAGS) -c $< -o $@
		
$(NAME) : $(OBJ) $(HEADER)
		@$(CC) $(OBJ) -o $(NAME)


clean : 
	@$(RM) $(OBJ)

fclean : clean
		@$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
