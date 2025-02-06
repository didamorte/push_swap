/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:43:04 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/05 23:42:26 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* push into a */
void	pa(int *a, int *b, int *size_a, int *size_b)
{
	int	i;

	if (*size_b == 0)
		return ;
	i = *size_a;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = b[0];
	(*size_a)++;
	(*size_b)--;
	i = 0;
	while (i < *size_b)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[*size_b] = 0;
	ft_printf("pa\n");
}

/* push into b */
void	pb(int *a, int *b, int *size_a, int *size_b)
{
	int	i;

	if (*size_a == 0)
		return;
	i = *size_b;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = a[0];
	(*size_b)++;
	(*size_a)--;
	i = 0;
	while (i < *size_a)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[*size_a] = 0;
	ft_printf("pb\n");
}
