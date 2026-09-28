/* Créer une fonction ft_div_mod qui divise a par b et range le résultat dans un pointeur d'entier 'div'. Ranger aussi le résultat du modulo d'a par b dans un pointeur d'entier 'mod' */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:01:23 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/18 17:19:09 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{	
	int	div = 0;

	int	mod = 0;

	ft_div_mod(10, 2, &div, &mod);
	printf("Resultats : %d, %d\n", div, mod);

	return (0);
}*/