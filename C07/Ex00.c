/* Reproduire le comportement de la fonction strdup */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 08:50:14 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/30 14:54:26 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newsrc;
	int		sizesrc;
	int		i;

	i = 0;
	sizesrc = ft_strlen(src);
	newsrc = malloc(sizesrc * sizeof(char));
	if (newsrc == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		newsrc[i] = src[i];
		i++;
	}
	newsrc[i] = '\0';
	return (newsrc);
}

/*#include <stdio.h>

int	main(void)
{
	char	*ture;

	ture = ft_strdup("Bonjour et au revoir");
	printf("%s", ture);

	free(ture);

	return (0);
}*/