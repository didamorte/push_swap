/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:41:58 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/10 16:02:17 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* swap */
void	swap(int *c, int size_c)
{
	int	x;

	if (size_c < 2)
		return ;
	x = c[0];
	c[0] = c[1];
	c[1] = x;
}

/* swap a */
void	sa(int *a, int size_a)
{
	swap(a, size_a);
	ft_printf("sa\n");
}

/* swap b */
void	sb(int *b, int size_b)
{
	swap(b, size_b);
	ft_printf("sb\n");
}

/* swap a and b */
void	ss(int *a, int *b, int size_a, int size_b)
{
	swap(a, size_a);
	swap(b, size_b);
	ft_printf("ss\n");
}
