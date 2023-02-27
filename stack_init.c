/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:06:33 by lwee              #+#    #+#             */
/*   Updated: 2023/02/26 19:06:33 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_new_element(int value)
{
    t_stack *new;

    new = malloc(sizeof *new);
    if (!new)
        return (NULL);
    new->value = value;
    new->index = 0;
    new->pos = -1;
    new->target_pos = -1;
    new->cost_a = -1;
    new->cost_b = -1;
    new->next = NULL;
    return (new);
}

t_stack *stack_fill(int argc, char **argv)
{
    t_stack     *stack_a;
    long int    nb;
    int         i;

    stack_a = NULL;
    nb = 0;
    i = 1;
    while (i < argc)
    {
        nb = ft_atoi(argv[i]);
        if (nb > INT_MAX || nb < INT_MIN)
            error_exit(&stack_a, NULL);
        if (i == 1)
            stack_a = stack_new_element(nb);
        else
            stack_add_bottom(&stack_a, stack_new_element(nb));
        i++;
    }
    return (stack_a);
}