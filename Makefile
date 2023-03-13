# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 15:38:08 by mel-harc          #+#    #+#              #
#    Updated: 2023/03/13 23:12:06 by mel-harc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  mandator/push_swap.c mandator/ft_check.c libft/ft_split.c libft/ft_strchr.c libft/ft_strlen.c \
		libft/ft_atoi.c libft/ft_isdigit.c libft/ft_strjoin.c libft/ft_strdup.c libft/ft_substr.c \
		mandator/ft_stack.c libft/ft_lstnew.c libft/ft_lstaddback.c libft/ft_lstiter.c \
		mandator/ft_swap.c libft/ft_lstmin.c libft/ft_lstmax.c libft/ft_lstiter1.c mandator/ft_push.c \
		libft/ft_update_index.c mandator/ft_swap_b.c mandator/ft_rank.c mandator/ft_bogo_sort.c  mandator/ft_check_dup.c

SRC_B = bonus/checker.c bonus/ft_check_dup_bonus.c bonus/ft_check_sign_bonus.c bonus/ft_fill_stack_bonus.c \
		bonus/push_ab.c bonus/instraction_stack_a.c bonus/instraction_stack_b.c \
		libft/ft_split.c libft/ft_strchr.c libft/ft_strlen.c libft/ft_atoi.c \
		libft/ft_isdigit.c libft/ft_strjoin.c libft/ft_strdup.c libft/ft_substr.c \
		bonus/ft_newlst.c bonus/ft_add.c  bonus/ft_update_index.c bonus/make.c \
		bonus/get_next_line.c bonus/get_next_line_utils.c

FLAGS = -Wall -Werror -Wextra

NAME = push_swap

NAME_B = checker

CC = cc

RM = rm -rf

HEADER = push_swap.h

HEADER_B = bonus/checker.h

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

all : $(NAME)

%.o : %.c $(HEADER) $(HEADER_B)
		@$(CC) $(FLAGS) -c $< -o $@
		
$(NAME) : $(OBJ) $(HEADER)
		@$(CC) $(OBJ) -o $(NAME)

bonus : $(OBJ_B) $(HEADER_B)
		@$(CC) $(OBJ_B) -o $(NAME_B)

clean : 
	@$(RM) $(OBJ) $(OBJ_B)

fclean : clean
		@$(RM) $(NAME) $(NAME_B)

re : fclean all 

.PHONY: all clean fclean re
