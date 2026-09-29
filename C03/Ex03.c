/* Reproduis le comportement de la fonction strncat */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 10:57:20 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/22 17:25:56 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (l < nb && src[l] != '\0')
	{
		dest[i + l] = src[l];
		l++;
	}
	dest[i + l] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{

	unsigned int	nb = 1;

	char	dest[] = "bon";

	char	src[] = "jour";

	printf("%s\n", ft_strncat(dest, src, nb));

	return (0);
}*/