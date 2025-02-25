/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noakebli <noakebli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:55:10 by noakebli          #+#    #+#             */
/*   Updated: 2025/02/16 14:03:59 by noakebli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = (*stack_a);
	if (tmp->value > tmp->next->value)
		sa(stack_a);
}

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sort_four(t_stack **stack_a, t_stack **stack_b, int lstsize)
{
	extract_min(stack_a, lstsize);
	if (is_stack_sorted(*stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b, int lstsize)
{
	extract_min(stack_a, lstsize);
	if (is_stack_sorted(*stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_four(stack_a, stack_b, lstsize - 1);
	pa(stack_a, stack_b);
}

void	sort_short_stack(t_stack **stack_a, t_stack **stack_b, int lstsize)
{
	if (lstsize == 5)
		sort_five(stack_a, stack_b, lstsize);
	else if (lstsize == 4)
		sort_four(stack_a, stack_b, lstsize);
	else if (lstsize == 3)
		sort_three(stack_a);
	else if (lstsize == 2)
		sort_two(stack_a);
	else
		return ;
}
