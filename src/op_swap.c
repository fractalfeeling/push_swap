/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:14:32 by lwee              #+#    #+#             */
/*   Updated: 2023/02/26 20:14:32 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
	tmp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp;
}

void	swap_a(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr("sa\n");
}

void	swap_b(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr("sb\n");
}

void	swap_s(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr("ss\n");
}
