/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:47:43 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/28 13:32:58 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 // (char*)s --> transforme (cast) le "const char *s" de la variable de depart en char*, sino    n la compilation fail car seul, "*s" est un char et non un const char, donc ne match pas le prototype.

int     main()
{
	printf("%zu\n", ft_strlcat("Hello", "World", 5));
	printf("%zu\n", strlcat("Hello", "World", 5));
	return (0);
}
