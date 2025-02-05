/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:13:49 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/05 22:43:52 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "libft/ft_printf/ft_printf.h"

/* Push */

void	pa(int *a, int *b, int *size_a, int *size_b);
void	pb(int *a, int *b, int *size_a, int *size_b);

/* Swap */

void	sa(int *a, int size_a);
void	sb(int *b, int size_b);
void	ss(int *a, int *b, int size_a, int size_b);

/* Rotate */

void	ra(int *a, int size_a);
void	rb(int *b, int size_b);
void	rr(int *a, int *b, int size_a, int size_b);

/* Reverse Rotate */

void	rra(int *a, int size_a);
void	rrb(int *b, int size_b);
void	rrr(int *a, int *b, int size_a, int size_b);

/* Radix */
void	radix_sort(int *a, int *b, int size);

/* Normalize */
void	normalize_array(int *arr, int size);

#endif