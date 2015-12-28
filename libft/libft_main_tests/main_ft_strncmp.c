/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:21:45 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/26 15:55:32 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <string.h>
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return ((int)(s1[i] - s2[i]));
}
*/
int		main()
{
	printf("%d\n", ft_strncmp("helloworld", "hello", 3));
	printf("%d\n", strncmp("helloworld", "hello", 3));

	printf("%d\n", ft_strncmp("helloworld", "hello", 5));
	printf("%d\n", strncmp("helloworld", "hello", 5));

	printf("%d\n", ft_strncmp("helloworld", "hello", 15));
	printf("%d\n", strncmp("helloworld", "hello", 15));
}
