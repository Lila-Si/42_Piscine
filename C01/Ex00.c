/* Créer une fonction qui prend un pointer d'entier en paramètre et initialise sa valeur à "42" */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:08:42 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/18 17:17:45 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*#include <stdio.h>

int	main(void)
{
	int a;

	a = 0;
	printf("Avant : %d\n", a);
	ft_ft(&a);
	printf("Apres : %d\n", a);

	return (0);
}*/