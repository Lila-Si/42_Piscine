/* Créer une fonction qui compte et retourne le nombre de caractère dans une chaine */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:07:57 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/18 17:02:22 by lilsi-ah         ###   ########lyon.fr   */
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
	char *str;

	str = "Un truc ecrit";
	printf("Nombre de caracteres : %d", ft_strlen(str));

	return (0);
}*/