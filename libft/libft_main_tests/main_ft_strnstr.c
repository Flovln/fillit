/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:22:05 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/26 11:33:39 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	printf("%s\n", ft_strnstr("HelloWorldHowAreYou", "How", 10));
	printf("%s\n", strnstr("HelloWorldHowAreYou", "How", 10));

	printf("%s\n", ft_strnstr("HelloWorldHowAreYou", "How", 3));
	printf("%s\n", strnstr("HelloWorldHowAreYou", "How", 3));

	printf("%s\n", ft_strnstr("HelloWorldHowAreYou", "How", 11));
	printf("%s\n", strnstr("HelloWorldHowAreYou", "How", 11));
}
