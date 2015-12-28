/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:17:51 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/27 10:37:56 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char dst[] = "hi";
	const char src[] = "hello";
	printf("%s", ft_strcpy(dst, src));
	printf("\n");
	return (0);
}

// or

/*
int		main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putstr(ft_strcpy(av[1], av[2]);
	ft_putchar('\n');
	return (0);
} */
