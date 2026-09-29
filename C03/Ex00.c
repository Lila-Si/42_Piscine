/* Reproduis le comportement de la fonction strcmp */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 09:41:49 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/22 17:17:41 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "ABC";

	char	s2[] = "AB";

	printf("%d", ft_strcmp(s1, s2));

	return (0);
}*/