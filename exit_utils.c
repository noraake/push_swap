/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noakebli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:57:18 by noakebli          #+#    #+#             */
/*   Updated: 2025/02/14 22:57:19 by noakebli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	ft_free_list(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp)
	{
		lst = tmp->next;
		free(tmp);
		tmp = lst;
	}
}

void	ft_exit(t_stack *lst, char **array)
{
	if (lst)
		ft_free_list(lst);
	if (array)
		ft_free_array(array);
	write(2, "Error\n", 6);
	exit(0);
}
