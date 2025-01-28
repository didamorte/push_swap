/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:43:04 by diogribe          #+#    #+#             */
/*   Updated: 2025/01/28 17:23:27 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* push into a */
void	pa(int *a, int *b)
{
	int	i;
	int	x;

	i = 0;
	if (!a[0])
	{
		a[0] = b[0];
		while (b[++i])
			b[i - 1] = b[i];
		b[i - 1] = 0;
	}
	else
	{
		while (a[i])
			i++;
		while (i--)
			a[i] = a[i - 1];
		a[0] = b[0];
		i = 0;
		while (b[++i])
			b[i - 1] = b[i];
		b[i - 1] = 0;
	}
}

/* push into b */
void	pb(int *a, int *b)
{
	int	i;
	int	x;

	i = 0;
	if (!b[0])
	{
		b[0] = a[0];
		while (a[++i])
			a[i - 1] = a[i];
		a[i - 1] = 0;
	}
	else
	{
		while (b[i])
			i++;
		while (i--)
			b[i] = b[i - 1];
		b[0] = a[0];
		i = 0;
		while (a[++i])
			a[i - 1] = a[i];
		a[i - 1] = 0;
	}
}
