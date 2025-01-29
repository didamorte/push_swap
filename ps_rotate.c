/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:43:01 by diogribe          #+#    #+#             */
/*   Updated: 2025/01/28 18:09:05 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rotate a */
void	ra(int *a)
{
	int	x;
	int	i;

	i = 1;
	x = a[0];
	while (a[i])
	{
		a[i - 1] = a[i];
		i++;
	}
	a[i - 1] = x;
}

/* rotate b */
void	rb(int *b)
{
	int	x;
	int	i;

	i = 1;
	x = b[0];
	while (b[i])
	{
		b[i - 1] = b[i];
		i++;
	}
	b[i - 1] = x;
}

/* rotate a and b */
void	rr(int *a, int *b)
{
	ra(a);
	rb(b);
}
