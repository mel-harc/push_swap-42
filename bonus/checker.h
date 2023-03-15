/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:13:38 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:10:06 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000
# endif

typedef struct s_llist
{
	int				value;
	struct s_llist	*next;
	struct s_llist	*prev_lst;
}	t_llist;

typedef struct s_iinfo
{
	t_llist	*top;
	t_llist	*bottom;
	t_llist	*prev_bottom;
}	t_iinfo;

typedef struct s_sstack
{
	t_llist	*top_b;
	t_llist	*bottom_b;
	t_llist	*prev_bottom_b;
}	t_sstack;

size_t	count_b(char **str);
int		check_dup1_b(int *nbr, int i);
int		check_sign_b(char *av);
int		check_alpha_b(char *str);
int		ft_isdigit(int c);
char	*ft_strchr(const char *s, int c);
int		check_dup_b(char **av);
char	*fill_b(char **av);
void	free_b(char **str, int *nbr, char *str_j);
int		check_ordre_b(int *nbr, int size);
void	error_b(int n);
int		ft_atoi(const char *str);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
void	ft_error_a(int n);
void	add(t_iinfo *info, t_llist *new);
t_llist	*lstnew(int content);
void	fill_stack(int *nbr, int size);
void	free_stack(t_iinfo *info);
void	inial(t_iinfo *info, t_sstack *stack);
void	pa(t_iinfo *info, t_sstack *stack);
void	pb(t_iinfo *info, t_sstack *stack_b);
void	sb(t_sstack *stack);
void	rb(t_sstack *stack);
void	rrb(t_sstack *stack);
void	sa(t_iinfo *info);
void	ra(t_iinfo *info);
void	rra(t_iinfo *info);
void	ft_eelse(t_llist *head, t_iinfo *info, t_sstack *stack_b);
char	*get_next_line(int fd);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_make(char *str, t_iinfo *info, t_sstack *stack);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_sstrlen(const char *s);
char	*ft_sstrjoin(const char *s1, const char *s2);
char	*ft_sstrchr(const char *s, int c);
char	*ft_sstrdup(const char *s1);
void	check_sort(t_iinfo *info, t_sstack *stack);
void	valid_sort(int n);
void	ss(t_iinfo *info, t_sstack *stack);
void	rr(t_iinfo *info, t_sstack *stack);
void	rrr(t_iinfo *info, t_sstack *stack);

#endif