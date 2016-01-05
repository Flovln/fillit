/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:26:28 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/30 17:46:35 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int		ft_check_grid(char *s)
{
	int i;
	int	nb_char;
	int	nb_line;
	int	nb_tetri;

	/* on va incrementer (+1) s[i] avant meme le premier tour de boucle*/
	i = -1;
	nb_char = 0;
	nb_line = 0;
	nb_tetri = 0;
	while (s[++i])
	{
		if (s[i] == '.' || s[i] == '#')
			nb_char++;
		if ((nb_char % 4 == 0) && s[i] == '\n' && s[i - 1] != '\n')
			nb_line++;
		if ((nb_line % 4 == 0) && s[i] == '\n' && s[i - 1] == '\n')
			nb_tetri++;
	}
	if (!s[i] && (nb_char % 16 == 0) && (nb_line % 4 == 0))
		nb_tetri++;
	if ((ft_count_char(s, '#') == nb_tetri * 4) &&
			(ft_count_char(s, '.') == nb_tetri * 12) &&
			(ft_count_char(s, '\n') == nb_line + nb_tetri - 1))
		return (0);
	return (1);
}

static	int		ft_check_tetri(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s == '#')
		{
			count++;
<<<<<<< HEAD
			if (count % 4 != 0 && *(s + 4) != '#' && *(s + 1) != '#'
					&& *(s + 5) != '#')
				return (0);
=======
			if (count % 4 != 0 && *(s - 1) != '#' && *(s + 1) != '#'
					&& *(s + 5) != '#')
				return (1);
>>>>>>> ee218f6c48426717defe1ca0695442f29fe4e891
			if (count % 4 == 0 && *(s - 1) != '#' && *(s + 1) != '#'
					&& *(s - 5) != '#')
				return (1);
		}
		s++;
	}
	return (0);
}

static	int		ft_print_error_tetri(char *s)
{
	if (ft_check_tetri(s) == 1)
		//write(1, "\n---UNVALID TETRI---", 20);
		return (1);
	else
		//write(1, "\n---VALID TETRI---", 18);
		return (0);
}

static	int		ft_check_newline(char *s)
{
	int nb_char;
	int	nb_line;

	nb_char = 0;
	nb_line = 0;
	while (*s)
	{
		if (*s == '.' || *s == '#')
			nb_char++;
		if ((nb_char % 4 == 0) && *s == '\n' && *(s - 1) != '\n')
			nb_line++;
		if (*s != '\n' && *(s - 1) != '\n' && nb_line % 5 == 0)
			return (1);
		s++;
	}
	return (0);
}

int				ft_check_file(char *s)
{
	if (s)
	{
		if (ft_check_grid(s) == 1 && ft_print_error_tetri(s) == 1
				&& ft_check_newline(s) == 1)
			return (1);
	}
	return (0);
}
