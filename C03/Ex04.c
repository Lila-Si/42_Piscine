/* Reproduis le comportement de la fonction strstr */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 15:14:59 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/22 17:02:28 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	while (str[i] != '\0')
	{
		l = 0;
		while (str[i + l] == to_find[l] && to_find[l] != '\0')
		{
			l++;
		}
		if (to_find[l] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Une phrase complete, tres complete";

	char	to_find[] = "tres";

	printf("%s", ft_strstr(str, to_find));

	return (0);
}*/