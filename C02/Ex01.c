/* Reproduis le comportement de la fonction strncpy */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:00:11 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/21 08:23:28 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > i && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned int	n;

	n = 15;
	char	dest[n];

	char	src[29] = "Une phrase qui doit se copier";
	
	ft_strncpy(dest, src, n);
	printf("%s", dest);

	return (0);
}*/