/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:13:49 by diogribe          #+#    #+#             */
/*   Updated: 2025/01/29 22:13:49 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

/* Push */

void	pa(int *a, int *b);
void	pb(int *a, int *b);

/* Swap */

void	sa(int *a);
void	sb(int *b);
void	ss(int *a, int *b);

/* Rotate */

void	ra(int *a);
void	rb(int *b);
void	rr(int *a, int *b);

/* Reverse Rotate */

void	rra(int *a);
void	rrb(int *b);
void	rrr(int *a, int *b);

#endif