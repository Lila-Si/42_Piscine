/* Créer une fonction qui returne 1 si la chaine passé en paramètres contient uniquement des caractères printable, et 0 si elle en contient d'autres. Il devrait retourner 1 si la chaine est vide. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 10:49:21 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/21 13:27:27 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[2] = "ss";

	printf("%d", ft_str_is_printable(str));

	return (0);
}*/