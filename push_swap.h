/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:40:10 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 17:51:59 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	int				value;
	int				index;
	int				rank;
	struct t_list	*next;
	struct t_list	*prev_lst;
}	t_list;

typedef struct s_info
{
	int		size_lst;
	t_list	*top;
	t_list	*bottom;
	t_list	*prev_bottom;
}	t_info;

typedef struct s_stack
{
	t_list	*top_b;
	t_list	*bottom_b;
	t_list	*prev_bottom_b;
}	t_stack;

void	ft_error(int n);
int		ft_check_sign(char *av);
char	*ft_strchr(const char *s, int c);
char	**ft_split(const char *s, char c);
size_t	ft_strlen(const char *s);
int		ft_check_alpha(char *str);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
int		ft_check_dup(char **av);
char	*ft_strdup(const char *s1);
size_t	ft_count(char **str);
int		ft_check_dup1(int *nbr, int i);
int		ft_check_ordre(int *nbr, int size);
void	ft_fill_stack(int *nbr, int size);
s_list	*ft_lstnew(int content, int i);
void	ft_add(s_info *info, s_list *new);
void	ft_algo_of_3nbr(s_info *info);
void	ft_sa(s_info *lst);
void	ft_ra(s_info *info);
void	ft_rra(s_info *info);
s_list	*ft_lstmin(s_info *lst);
s_list	*ft_lstmax(s_stack *head);
void	ft_algo_of_5nbr(s_info *info);
void	ft_algo_of_4nbr(s_info *info);
void	ft_pb(s_info *node, s_stack *stack_b);
void	ft_f(s_info *info, s_stack *stack, s_list *min);
void	ft_update_index(s_info *info);
void	ft_update_index_b(s_stack *stack);
void	ft_pa(s_info *info, s_stack *stack);
void	ft_sb(s_stack *stack);
void	ft_rb(s_stack *stack);
void	ft_rrb(s_stack *stack);
void	ft_rank(s_info *info);
void	ft_algo_sort(s_info *info);
void	ft_free(char **str, int *nbr);
char	*ft_fill(char **av);

#endif
