/* Créer une function qui échange la valeur de deux entier dont l'adresse est entrée en paramètres. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:16:18 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/18 13:27:39 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 1;

	int	b = 2;

	printf("Avant : %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("Apres : %d, %d\n", a, b);

	return (0);
}*/