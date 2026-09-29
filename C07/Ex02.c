/* Créer une fonction ft_ultimate_range qui alloue et assigne un tableau d'ints.
Le tableau doit contenir toutes les valeurs entre min et max. Min inclus, max exclus.
La taille de range doit être retournée (ou -1 en cas d'erreur).
Si la valeur de min est plus grande ou égale à la valeur de max, range pointera sur null et retournera 0. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:32:29 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/30 09:28:01 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*intableau;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	j = 0;
	intableau = malloc((max - min) * sizeof(int));
	if (intableau == NULL)
		return (-1);
	while (i < max)
	{
		intableau[j] = i;
		i++;
		j++;
	}
	*range = intableau;
	return (j);
}

/*#include <stdio.h>

int	main(void)
{
	int	temp;
	int	*range[3];

	temp = ft_ultimate_range(range, 5, 20);
	printf("%d\n", temp);
	return (0);
}*/