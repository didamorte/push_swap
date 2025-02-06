/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:43:01 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/05 23:43:56 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rotate a */
void	ra(int *a, int size_a)
{
	int	x;
	int	i;

	if (size_a < 2)
		return ;
	i = 0;
	x = a[0];
	while (i < size_a - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[size_a - 1] = x;
	ft_printf("ra\n");
}

/* rotate b */
void	rb(int *b, int size_b)
{
	int	x;
	int	i;

	if (size_b < 2)
		return ;
	i = 0;
	x = b[0];
	while (i < size_b - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[size_b - 1] = x;
	ft_printf("rb\n");
}

/* rotate a and b */
void	rr(int *a, int *b, int size_a, int size_b)
{
	ra(a, size_a);
	rb(b, size_b);
	ft_printf("rr\n");
}
