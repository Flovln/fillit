/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:18:53 by fviolin           #+#    #+#             */
/*   Updated: 2015/11/30 15:04:11 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rot_1(char *s)
{
	while(*s)
	{
		if (*s >= 'a' && *s <= 'y')
			ft_putchar(*s + 1);
		else if (*s == 'z')
			ft_putchar('a');
		else
			ft_putchar(*s);
		s++;
	}
}

int		main()
{
	char s[] = "h";

	ft_striter(s, ft_rot_1);
	return (0);
}
