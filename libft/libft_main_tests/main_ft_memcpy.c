/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:05:16 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/28 13:28:01 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char src [50] = "HelloWorldHowAreYou";
	char dst[50];
	ft_memcpy(dst, src, ft_strlen(src)+1);
	printf("Ma fonction = %s\n\n", dst);
	memcpy(dst, src, strlen(src)+1);
	printf("Fonction d'origine = %s\n", dst);

	return (0);
}
//s2[i] != '\0' n'a pas d'interet dans ce cas car on ne tient pas
//compte du \0 mais de n!
//on part du principe aue c'est l'utilisateur qui doit utiliser le programme intelligemment

/*
int		main()
{
	const char src[50] = "HelloWorldHowAreYou";
	char dst[50];

	printf("Before memcpy dest = %s\n", dst);
	memcpy(dst, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dst);

	return (0);
}
*/
