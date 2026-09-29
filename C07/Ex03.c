/* Écrire une fonction qui concatene toutes les chaines pointées par strs séparé par sep.
Size est le numbre de chaine dans strs. Si size est 0, il devrait libérer une chaine vide. */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 09:33:36 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/31 09:51:22 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	lenstrs;
	int	lensep;
	int	sizetwo;

	i = 0;
	j = 0;
	lenstrs = 0;
	lensep = 0;
	sizetwo = size;
	while (size > 0)
	{
		while (strs[i][j] != '\0')
		{
			lenstrs++;
			j++;
		}
		i++;
		j = 0;
		size--;
	}
	while (sep[lensep] != '\0')
		lensep++;
	return (lenstrs + lensep * (sizetwo - 1));
}

char	*ft_strcat(char *strtotal, char	*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (strtotal[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		strtotal[i + j] = src[j];
		j++;
	}
	strtotal[i + j] = '\0';
	return (strtotal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	char	*strtotal;

	i = 0;
	length = ft_strlen(size, strs, sep);
	if (size == 0)
	{
		strtotal = malloc(1 * sizeof(char));
		strtotal[i] = '\0';
		return (strtotal);
	}
	strtotal = malloc((length + 1) * sizeof(char));
	if (strtotal == NULL)
		return (NULL);
	strtotal[0] = '\0';
	while (i < size)
	{
		ft_strcat(strtotal, strs[i]);
		if (i < size - 1)
			ft_strcat(strtotal, sep);
		i++;
	}
	return (strtotal);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*sep = ", ";
	char	*meur = ft_strjoin(argc, argv, sep);

	printf("%s\n", meur);
	free(meur);
	return (0);
}*/