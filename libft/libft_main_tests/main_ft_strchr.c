/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:15:58 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/26 15:07:38 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main (int ac, char **av)
{
	printf("%s\n", ft_strchr(av[1], 'l')); // pointera sur le premier l trouve
	printf("%s\n", strchr(av[1], 'l'));
	return (0);
}
