/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:43:01 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/10 16:00:43 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rotate */
void	rotate(int *c, int size_c)
{
	int	x;
	int	i;

	if (size_c < 2)
		return ;
	i = 0;
	x = c[0];
	while (i < size_c - 1)
	{
		c[i] = c[i + 1];
		i++;
	}
	c[size_c - 1] = x;
}

/* rotate a */
void	ra(int *a, int size_a)
{
	rotate(a, size_a);
	ft_printf("ra\n");
}

/* rotate b */
void	rb(int *b, int size_b)
{
	rotate(b, size_b);
	ft_printf("rb\n");
}

/* rotate a and b */
void	rr(int *a, int *b, int size_a, int size_b)
{
	rotate(a, size_a);
	rotate(b, size_b);
	ft_printf("rr\n");
}
