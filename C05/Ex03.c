/* Créer une fonction récursive qui retourne la valeur de la puissance appliqué au nombre.
La puissance de 0 par 0 retourne 1. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 08:38:11 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/28 11:36:16 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(4, 5));

	return (0);
}*/