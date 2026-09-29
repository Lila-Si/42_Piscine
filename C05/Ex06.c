/* Créer une fonction qui retourne 1 si le nombre donné en paramètre est un nombre premier, et 0 s'il ne l'est pas.
! 0 et 1 ne sont pas des nombres premiers. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:06:55 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/28 11:36:45 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	calculator;
	int	divisor;

	if (nb < 2)
		return (0);
	calculator = 1;
	divisor = 0;
	while (calculator < nb)
	{
		if (nb % calculator == 0)
			divisor ++;
		calculator++;
	}
	if (divisor > 1)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(13));

	return (0);
}*/