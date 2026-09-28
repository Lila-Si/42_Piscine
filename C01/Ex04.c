/* Créer une fonction ft_ultimate_div_mod. Cette fonction divise les paramètres a par b et le résultat doit être rangé dans le pointeur d'entier a. Le modulo de la division doit être rangé dans le pointer d'entier b. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:11:33 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/19 10:27:54 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 10;
	
	int	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("Resultats : %d, %d\n", a, b);

	return (0);
}*/