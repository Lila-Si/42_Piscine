/* Créer un fichier ft_boolean.h. Il doit compiler et faire fonctionner le main suivant (image) */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilsi-ah <lilsi-ah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 13:54:45 by lilsi-ah          #+#    #+#             */
/*   Updated: 2026/08/05 17:08:55 by lilsi-ah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# include <unistd.h>

# define FT_BOOLEAN_H

# define TRUE 1
# define SUCCESS 1
# define FALSE 0

typedef int	t_bool;
# define EVEN(nbr)  (nbr % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif