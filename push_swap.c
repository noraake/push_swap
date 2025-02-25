/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noakebli <noakebli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:09:57 by noakebli          #+#    #+#             */
/*   Updated: 2025/02/16 14:18:22 by noakebli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_position(t_stack **stack, int size)
{
	int		max_p;
	int		max;
	t_stack	*st;
	int		i;

	if ((*stack) == NULL)
		return (0);
	st = (*stack);
	max_p = st->position;
	max = st->value;
	i = 0;
	while (i <= size)
	{
		if (st->value > max)
		{
			max = st->value;
			max_p = st->position;
		}
		i++;
		if (st->next)
			st = st->next;
	}
	return (max_p);
}

void	push_back_a(int stack_b_size, t_stack **stack_a, t_stack **stack_b)
{
	int	max;

	while (stack_b_size > 0)
	{
		max = max_position(stack_b, stack_b_size);
		if (max <= (stack_b_size / 2))
		{
			while (max > 1)
			{
				rb(stack_b);
				max--;
			}
		}
		else if (max > (stack_b_size / 2))
		{
			while (max <= stack_b_size)
			{
				rrb(stack_b);
				max++;
			}
		}
		pa(stack_a, stack_b);
		stack_b_size--;
		set_positions(stack_b, stack_b_size);
	}
}

void	set_positions(t_stack **stack, int lstsize)
{
	t_stack	*lst;
	int		i;

	if (!stack || !(*stack))
		return ;
	lst = (*stack);
	i = 0;
	while (i < lstsize)
	{
		lst->position = i + 1;
		lst = lst->next;
		i++;
	}
}

void	fill_stack_b(t_stack **stack_a, t_stack **stack_b, int lstsize)
{
	int	i;
	int	range;

	if (lstsize > 100)
		range = 42;
	else
		range = 15;
	i = 0;
	while (i < lstsize)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index <= range + i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		lstsize;

	(1) && (lstsize = 0, stack_a = NULL, stack_b = NULL);
	if (argc > 1 && are_args_valid(argc, argv))
	{
		parsing(argc, argv, &stack_a, &lstsize);
		if (index_stack(stack_a))
			return (1);
		if (is_stack_sorted(stack_a))
		{
			ft_free_list(stack_a);
			return (0);
		}
		if (lstsize < 6)
			sort_short_stack(&stack_a, &stack_b, lstsize);
		else
		{
			fill_stack_b(&stack_a, &stack_b, lstsize);
			set_positions(&stack_b, lstsize);
			push_back_a(lstsize, &stack_a, &stack_b);
		}
		ft_free_list(stack_a);
	}
}
