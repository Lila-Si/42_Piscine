/* Créer une fonction récursive qui retourne un nombre.
Ce nombre est le résultat d'une opération factorielle basée sur le nombre donné en paramètres.
Si l'argument n'est pas valide, la fonction devrait retourner 0*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 08:47:54 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/28 11:05:31 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb = -3;

	printf("%d", ft_recursive_factorial(nb));

	return (0);
}*/