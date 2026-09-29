/* Reproduis le comportement de la fonction strncmp */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:52:50 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/23 09:17:11 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n - 1 > i && (s1[i] == s2[i] && s1[i] != '\0'))
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned int	n = 5;

	char	s1[] = "ABCDEFGHIJKL";

	char	s2[] = "ABCDEEGHIJKL";

	printf("%d", ft_strncmp(s1, s2, n));

	return (0);
}*/