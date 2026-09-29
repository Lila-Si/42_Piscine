/* Créer une fonction qui affiche le nombre entré en paramètre.
Cette function devrait afficher toutes les valeurs possibles avec une variable de type int */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:47:16 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/25 10:00:14 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char charnb)
{
	write(1, &charnb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

/*int	main(void)
{
	int	nb = 10;
	ft_putnbr(nb);

	return (0);
}*/