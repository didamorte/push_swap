/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:41:58 by diogribe          #+#    #+#             */
/*   Updated: 2025/01/28 16:02:16 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* swap a */
void	sa(int *a)
{
	int	x;

	if (a[1] && a[0])
	{
		x = a[0];
		a[0] = a[1];
		a[1] = x;
	}
}

/* swap b */
void	sb(int *b)
{
	int	x;

	if (b[1] && b[0])
	{
		x = b[0];
		b[0] = b[1];
		b[1] = x;
	}
}

/* swap a and b */
void	ss(int *a, int *b)
{
	sa(a);
	sb(b);
}
