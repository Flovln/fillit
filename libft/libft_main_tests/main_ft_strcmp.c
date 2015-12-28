/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:07:46 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/26 14:18:52 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()	
{
	printf("%d\n", ft_strcmp("helloworld", "helloworld"));
	printf("%d\n", strcmp("helloworld", "helloworld"));

	printf("%d\n", ft_strcmp("helloworld", "hello"));
	printf("%d\n", strcmp("helloworld", "hello"));
}
