/* Créer une fonction qui returne 1 si la chaine passé en paramètres contient uniquement des caractères alphabétique, et 0 si elle en contient d'autres. Il devrait retourner 1 si la chaine est vide. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 08:23:44 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/20 13:27:55 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[2] = "aa";

	printf("%d", ft_str_is_alpha(str));

	return (0);
}*/