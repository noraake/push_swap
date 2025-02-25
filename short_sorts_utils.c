/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorts_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noakebli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:56:10 by noakebli          #+#    #+#             */
/*   Updated: 2025/02/14 22:56:12 by noakebli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_min(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*min;

	tmp = stack;
	min = stack;
	while (tmp != NULL)
	{
		if (tmp->value < min->value)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	extract_min(t_stack **stack_a, int lstsize)
{
	t_stack	*min;
	int		min_position;

	set_positions(stack_a, lstsize);
	min = find_min(*stack_a);
	min_position = min->position;
	if (lstsize == min_position)
		rra(stack_a);
	else if (lstsize == 5 && min_position == 4)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else
	{
		while (min_position > 1)
		{
			ra(stack_a);
			min_position--;
		}
	}
}
