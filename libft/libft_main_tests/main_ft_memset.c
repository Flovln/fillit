/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:21:03 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/27 11:47:23 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	char str[20];

	strcpy(str,"HelloWorldHowAreYou");
	//test avec un int
	printf("%s\n", ft_memset(str, '1', 9));
	printf("%s\n", memset(str, '1', 9));
	//test avec char
	printf("%s\n", ft_memset(str, 's', 5));
	printf("%s\n", memset(str, 's', 5));
	//test caractere special
	printf("%s\n", ft_memset(str, '$', 3));
	printf("%s\n", memset(str, '$', 3));
}
