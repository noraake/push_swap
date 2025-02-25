/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noakebli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:56:35 by noakebli          #+#    #+#             */
/*   Updated: 2025/02/14 22:56:38 by noakebli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_num
{
	int				value;
	int				index;
	int				position;
	struct s_num	*next;
}					t_stack;
void	set_positions(t_stack **stack, int lstsize);
int		is_stack_sorted(t_stack *stack);
void	parsing(int argc, char **argv, t_stack **stack_a, int *lstsize);
int		are_args_valid(int argc, char **argv);
char	**ft_split(const char *s, char c);
long	ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);
char	*ft_substr(const char *s, unsigned int start, size_t len);
void	sort_two(t_stack **stack_a);
void	sort_three(t_stack **stack_a);
void	sort_four(t_stack **stack_a, t_stack **stack_b, int lstsize);
void	sort_five(t_stack **stack_a, t_stack **stack_b, int lstsize);
void	sort_short_stack(t_stack **stack_a, t_stack **stack_b, int lstsize);
t_stack	*find_min(t_stack *stack);
void	extract_min(t_stack **stack_a, int lstsize);
t_stack	new_num(int content);
int		is_stack_sorted(t_stack *stack);
void	add_node(int content, t_stack **stack_a);
int		index_stack(t_stack *stack);
void	ft_free_array(char **array);
void	ft_free_list(t_stack *lst);
void	ft_exit(t_stack *lst, char **array);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_exit(t_stack *lst, char **array);
#endif
