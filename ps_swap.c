/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:41:58 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/06 20:57:12 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* swap a */
void	sa(int *a, int size_a)
{
	int	x;

	if (size_a < 2)
		return ;
	x = a[0];
	a[0] = a[1];
	a[1] = x;
	ft_printf("sa\n");
}

/* swap b */
void	sb(int *b, int size_b)
{
	int	x;

	if (size_b < 2)
		return ;
	x = b[0];
	b[0] = b[1];
	b[1] = x;
	ft_printf("sb\n");
}

/* swap a and b */
void	ss(int *a, int *b, int size_a, int size_b)
{
	sa(a, size_a);
	sb(b, size_b);
	ft_printf("ss\n");
}
