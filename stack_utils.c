/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noakebli <noakebli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:56:58 by noakebli          #+#    #+#             */
/*   Updated: 2025/02/17 12:13:03 by noakebli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	new_num(int value)
{
	t_stack	num;

	num.value = value;
	return (num);
}

int	is_stack_sorted(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	add_node(int value, t_stack **stack_a)
{
	t_stack	*new_node;
	t_stack	*tmp;

	if (!stack_a)
		return ;
	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->position = 0;
	new_node->index = 0;
	new_node->next = NULL;
	if (*stack_a == NULL)
	{
		*stack_a = new_node;
		return ;
	}
	tmp = *stack_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
}

int	index_stack(t_stack *stack)
{
	t_stack	*lst;
	t_stack	*tmp;

	lst = stack;
	while (lst)
	{
		tmp = stack;
		while (tmp)
		{
			if (tmp != lst && lst->value == tmp->value)
			{
				ft_exit(stack, NULL);
				return (1);
			}
			if (tmp != lst && lst->value > tmp->value)
				lst->index++;
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (0);
}
