/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:29 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/26 17:53:14 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int      main()
{
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n\n", isalnum(' '));

	printf("%d\n", ft_isalnum('s'));
	printf("%d\n\n", isalnum('s'));

	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", isalnum('5'));
}
