/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:42:31 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/25 19:31:23 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	printf("%s\n", ft_strstr("HelloWorldHowAreYou", "HowAreYou"));
	printf("%s\n\n", strstr("HelloWorldHowAreYou", "HowAreYou"));
	
	printf("%s\n", ft_strstr("HelloWorldHowAreYou", "HwAreYou"));
	printf("%s\n\n", strstr("HelloWorldHowAreYou", "HwAreYou"));
	
	printf("%s\n", ft_strstr("HelloWorldHowAreYou", ""));
	printf("%s\n\n", strstr("HelloWorldHowAreYou", ""));
}
