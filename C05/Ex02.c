/* Créer une fonction itérative qui retourne la valeur de la puissance appliqué au nombre.
Une puissance de moins de 0 retourne 0. La puissance de 0 par 0 retourne 1. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 13:09:21 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/28 11:36:00 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;

	total = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		total *= nb;
		power--;
	}
	return (total);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));

	return (0);
}*/