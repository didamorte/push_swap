/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:41:04 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/03 22:27:59 by diogribe         ###   ########.fr       */
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
	int	i;
	int	*arr;

	if (!av[2])
	{
		av = ft_split(av[1], ' '); // esta a cortar o primeiro numero
		stack_maker(ac, av);
	}
	else
	{
		i = 0;
		arr = (int *)ft_calloc(ac, sizeof(int));
		while (++i < ac)
			arr[i - 1] = ft_atoi(av[i]);
	}
	return (arr);
}

int	main(int ac, char **av)
{
	int *arr = stack_maker(ac, av);
	
	for (int i = 0; i < ac; i++)
	{
		ft_printf("%i, ", arr[i]);
	}
}
