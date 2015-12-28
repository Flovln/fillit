/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:44:04 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/24 11:46:05 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int ac, char **av)
{
	printf("%s", ft_strdup(av[1]));
	printf("\n");
	printf("\s", strdup(av[1])); //Pour comparer avec la fonction d'origine
	printf("\n");
	return (0);
}
