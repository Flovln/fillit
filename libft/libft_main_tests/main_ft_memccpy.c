/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:00:58 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/27 14:13:52 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char dst[50];
	char src[50] = "HelloWorldHowAreYouToday";
	int i;

	i = 112;
	ft_memccpy(dst, src, i, strlen(src)+1);
	printf("Ma fonction = %s\n\n", dst);
	memccpy(dst, src, i, strlen(src)+1);
	printf("Fonction d'origine = %s\n", dst);
}
