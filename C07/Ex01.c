/* Créer une fonction ft_range qui retourne un tableau de ints.
Le tableau doit contenir toutes les valeurs entre min et max. Min inclus, max exclus.
Si la valeur de min est plus grande ou égale à la valeur de max, un pointeur null devra être retourné. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:25:54 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/29 14:07:40 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*intableau;

	if (min >= max)
		return (NULL);
	i = min;
	j = 0;
	intableau = malloc((max - min) * sizeof(int));
	if (intableau == NULL)
		return (NULL);
	while (i < max)
	{
		intableau[j] = i;
		i++;
		j++;
	}
	return (intableau);
}

/*#include <stdio.h>

int	main(void)
{
	int	*meur;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 10;
	max = 20;
	meur = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", meur[i]);
		i++;
	}
	free(meur);

	return (0);
}*/