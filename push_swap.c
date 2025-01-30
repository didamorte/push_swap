/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:41:04 by diogribe          #+#    #+#             */
/*   Updated: 2025/01/30 17:37:39 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dup_check(int *a)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	while (a[size])
		size++;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[i] == a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*stack_maker(int ac, char **av)
{
	int	*stack;
	int	arr[101];
	int	i;

	if (!av[2])
	{
		i = -1;
		while (av[1][++i])
			arr[i] = ft_atoi(av[1][i]);
		*stack = (int *)ft_calloc(i + 1, sizeof(int));
	}
	else
	{
		i = 0;
		while (av[++i])
			arr[i] = ft_atoi(av[i]);
		*stack = (int *)ft_calloc(i, sizeof(int));
	}
	return (stack);
}

int	main(int ac, char **av)
{
	
}
