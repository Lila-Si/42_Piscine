/* Des instructions trop longues pour que je puisse avoir la motivation de les écrire */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 09:18:47 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/07/24 13:45:34 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	finalnb;
	int	finalsigns;

	finalsigns = 1;
	finalnb = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			finalsigns *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (finalnb * finalsigns);
		finalnb *= 10;
		finalnb += str[i] - '0';
		i++;
	}
	return (finalnb * finalsigns);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "   ---+--+1234ab567";

	printf("%d", ft_atoi(str));

	return (0);
}*/