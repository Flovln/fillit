/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:28:10 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/27 15:37:37 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char			str[] = "HelloWorldHowAreYou";
	char			c;
	unsigned char	*ret;

	c = 'W';
	ret = ft_memchr(str, c, strlen(str));
	printf("Chaine apres premiere occurence %c, %s\n\n", c, ret);
	ret = memchr(str, c, strlen(str));
	printf("Chaine apres premiere occurence %c, %s\n\n", c, rest);

	return (0);
}
