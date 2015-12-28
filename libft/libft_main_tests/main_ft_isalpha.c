/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:17:00 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/26 17:18:16 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main()
{
	printf("%d\n", ft_isalpha('I'));
	printf("%d\n", isalpha('I'));
	printf("\n");

	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", isalpha(' '));
	printf("\n");

	printf("%d\n", ft_isalpha('t'));
	printf("%d\n", isalpha('t'));
}
