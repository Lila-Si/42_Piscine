/* Créer une fonction qui met en majuscule la première lettre de chaque mot et transforme toutes les autres en minuscule. Un mot est une chaine de caractères alphanumériques. Il devrait retourner la chaine de caractère. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 13:23:21 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/21 11:01:14 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i -1] >= 'a' && str[i -1] <= 'z')
				|| (str[i -1] >= 'A' && str[i -1] <= 'Z')))
		{
			str[i] += 32;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i -1] >= '0' && str[i -1] <= '9')
			&& !(str[i -1] >= 'a' && str[i -1] <= 'z')
			&& !(str[i -1] >= 'A' && str[i -1] <= 'Z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[49] = "hi, how ARE you? 42words forty-two; fifty+and+one";

	printf("%s", ft_strcapitalize(str));

	return (0);
}*/