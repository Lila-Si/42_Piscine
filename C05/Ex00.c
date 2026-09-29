/* Créer une fonction itérative qui retourne un nombre.
Ce nombre est le résultat d'une opération factorielle basée sur le nombre donné en paramètres.
Si l'argument n'est pas valide, la fonction devrait retourner 0*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:48:20 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/27 13:32:55 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = nb;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		total *= (nb - 1);
		nb--;
	}
	return (total);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb = -3;

	printf("%d", ft_iterative_factorial(nb));

	return (0);
}*/