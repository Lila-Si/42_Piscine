/* Créer une fonction qui retourne la racine carrée d'un nombre (si elle existe) ou 0 si la racine carrée est un nombre irrationnel.*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:32:04 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/27 16:03:22 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	squaroot;

	squaroot = 1;
	while (squaroot <= nb)
	{
		if (squaroot * squaroot == nb)
			return (squaroot);
		squaroot++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(1));

	return (0);
}*/