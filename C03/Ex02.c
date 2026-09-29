/* Reproduis le comportement de la fonction strcat */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 08:35:46 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/22 15:04:11 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0')
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
	char	dest[20] = "bon";

	char	src[] = "jour";

	printf("%s", ft_strcat(dest, src));

	return (0);
}*/