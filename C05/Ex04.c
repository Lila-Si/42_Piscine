/* Créer une fonction ft_fibonacci qui retourne le n element de la suite de Fibonacci, le premier élément étant à l'index 0.
Nous considérons que la suite de Fibonacci comme 0, 1, 1, 2.
Évidemment ft_fibonacci doit être récursif. Si l'index est inférieur à 0, la fonction doit retourner -1. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 08:55:18 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/27 15:27:09 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + (ft_fibonacci(index - 2)));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(12));

	return (0);
}*/