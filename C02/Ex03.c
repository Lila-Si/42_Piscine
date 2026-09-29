/* Créer une fonction qui returne 1 si la chaine passé en paramètres contient uniquement des caractères numérique, et 0 si elle en contient d'autres. Il devrait retourner 1 si la chaine est vide. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 09:02:11 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/20 13:29:21 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[2] = "ab";

	printf("%d", ft_str_is_numeric(str));

	return (0);
}*/