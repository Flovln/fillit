/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:30:06 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/30 10:12:48 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     main()
{
	unsigned char dst[] = "HelloWorldHowAreYou";
	unsigned char src[] = "HelloWorldppppppppp";

	printf("Avant memmove, dest = %s, src = %s\n\n", dst, src);
	ft_memmove(dst, src, 19);
	printf("Apres memmove, dest = %s, src = %s\n\n", dst, src);
	memmove(dst, src, 19);
	printf("Fonction d'origine, dest = %s, src = %s\n", dst, src);
}
