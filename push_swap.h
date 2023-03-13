/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:40:10 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/13 18:05:10 by mel-harc         ###   ########.fr       */
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
	struct s_list	*next;
	struct s_list	*prev_lst;
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
t_list	*ft_lstnew(int content, int i);
void	ft_add(t_info *info, t_list *new);
void	ft_algo_of_3nbr(t_info *info);
void	ft_sa(t_info *lst);
void	ft_ra(t_info *info);
void	ft_rra(t_info *info);
t_list	*ft_lstmin(t_info *lst);
t_list	*ft_lstmax(t_stack *head);
void	ft_algo_of_5nbr(t_info *info);
void	ft_algo_of_4nbr(t_info *info);
void	ft_pb(t_info *node, t_stack *stack_b);
void	ft_f(t_info *info, t_stack *stack, t_list *min);
void	ft_update_index(t_info *info);
void	ft_update_index_b(t_stack *stack);
void	ft_pa(t_info *info, t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rank(t_info *info);
void	ft_algo_sort(t_info *info);
char	*ft_fill(char **av);
void	ft_first_sort(t_info *info, t_stack *stack, int m);
void	ft_final_sort(t_stack *stack, t_info *info);
void	ft_swap_addr(t_list **tab);
void	ft_free_rank(t_list **tab);
void	ft_else(t_list *head, t_info *info, t_stack *stack_b);
void	ft_swap_addr(t_list **tab);
void	ft_free(char **str, int *nbr, char *str_j);
void	ft_free_stack(t_info *info);
void	ft_inial(t_info *info, int size);
void	ft_error_a(int n);

#endif
