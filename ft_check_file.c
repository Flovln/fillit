/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:26:28 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/16 15:58:51 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../fillit/libft/libft.h"

static	int		ft_count_char(char *s, char c)
{
	int cmp;

	cmp = 0;
	while (*s)
	{
		if (*s == c)
			cmp++;
		s++;
	}
	return (cmp);
}

int		ft_count_tetri(char *s)
{
	int	i;

	i = ft_count_char(s, '#');
	i = i / 4;
	return (i);
}

static	int		ft_check_grid(char *s)
{
	int	i;
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
		if ((nb_char % 4 == 0) && s[i] == '\n' && s[i- 1] != '\n')
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
	int i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '#')
		{
			if (s[i - 1] != '#' && s[i + 1] != '#' && s[i + 5] != '#')
			{
				write(1, "\n---UNVALID TETRI---", 20);
				return (0);
			}
		}
		i++;
	}
	write(1, "\n---VALID TETRI---", 18);
	return (1);
}

int				ft_check_file(char *s)
{
	if (s)
	{
		if (ft_check_grid(s) == 1 && ft_check_tetri(s) == 1)
			return (1);
	}
	return (0);
}
