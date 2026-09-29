/* Créer une fonction qui compte et retourne le nombre de caractère d'une chaine */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 10:44:05 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/23 13:29:49 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Une longue phrase ou on compte le nombre de caractere";
	printf("%d", ft_strlen(str));

	return (0);
}*/