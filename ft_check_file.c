/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:26:28 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/18 10:36:08 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../fillit/libft/libft.h"

static	int		ft_check_tab(char *s)
{
	int i;
	int	nb_char;
	int	nb_line;
	int	nb_tetri;

	i = 0;
	nb_char = 0;
	nb_line = 0;
	nb_tetri = 0;
	while (s[i])
	{
		if (s[i] == '.' || s[i] == '#')
			nb_char++;
		if ((nb_char % 4 == 0) && s[i] == '\n' && s[i - 1] != '\n')
			nb_line++;
		if ((nb_line % 4 == 0) && s[i] == '\n' && s[i - 1] == '\n')
			nb_tetri++;
		i++;
	}
	if (!s[i] && (nb_char % 16 == 0) && (nb_line % 4 == 0))
		nb_tetri++;
	if ((ft_count_char(s, '#') == nb_tetri * 4) &&
			(ft_count_char(s, '.') == nb_tetri * 12) &&
			(ft_count_char(s, '\n') == nb_line + nb_tetri - 1))
		return (1);
	return (0);
}

static	int		ft_check_tetri(char *s)
{
	int	j;
	int count;

	j = 0;
	count = 0;
	while (*s)
	{
		if (*s == '#')
		{
			count++;
			if (count <= 3 && *(s - 1) != '#' && *(s + 1) != '#'
					&& *(s + 5) != '#')
				return (0);
			if (count == 4 && *(s - 1) != '#' && *(s + 1) != '#'
					&& *(s - 5) != '#')
				return (0);
		}
		s++;
	}
	return (1);
}

static	int		ft_print_error_tetri(char *s)
{
	if (ft_check_tetri(s) == 0)
	{
		ft_putstr("\n---UNVALID TETRI---");
		return (0);
	}
	else
	{
		ft_putstr("\n---VALID TETRI---");
		return (1);
	}
}

int				ft_check_file(char *s)
{
	if (s)
		if (ft_check_tab(s) == 1 && ft_print_error_tetri(s) == 1)
			return (1);
	return (0);
}
