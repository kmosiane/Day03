/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmosiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:32:33 by kmosiane          #+#    #+#             */
/*   Updated: 2020/06/24 09:51:09 by kmosiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_putchar(char c);

void ft_swap(int *a, int *b);
{
	int tempr;
	tempr = *a;
	*a = *b;
	*b = tempr;
}

