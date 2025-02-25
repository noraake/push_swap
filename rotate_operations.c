/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noakebli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:55:54 by noakebli          #+#    #+#             */
/*   Updated: 2025/02/14 22:55:57 by noakebli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if ((*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a);
	*stack_a = (*stack_a)->next;
	tmp2 = (*stack_a);
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if ((*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b);
	*stack_b = (*stack_b)->next;
	tmp2 = (*stack_b);
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 3);
}
