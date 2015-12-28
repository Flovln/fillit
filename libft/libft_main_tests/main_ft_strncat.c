/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:56:41 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/25 10:03:54 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int ac, char **av)
{
	printf("%s\n", ft_strncat(av[1], av[2], 4));
	printf("%s\n", strncat(av[1], av[2], 4));
	return (0);
}

//  test main comportement fonction native

/* int	main()
{
	char src[50];
	char dst[50];

	strcpy(src, "This is source");
	strcpy(dst, "This is destination);

	strncat(dst, src, 5);

	printf("%s\n", dst);

	return (0);
}
*/
