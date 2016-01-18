/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:26:28 by fviolin           #+#    #+#             */
/*   Updated: 2016/01/18 15:43:33 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int		ft_check_char(char *s)
{
	int i;
	int	nb_char;
	int	nb_line;
	int	nb_tetri;

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
			(ft_count_char(s, '.') == nb_tetri * 12)
			&& (ft_count_char(s, '\n') == nb_line + nb_tetri - 1))
		return (1);
	return (0);
}

static int	ft_check_line(char *s)
{
	int cnt;

	while (*s)
	{
		cnt = 0;
		while (*s != '\n')
		{
			s++;
			cnt++;
		}
		if (cnt != 4)
			ft_error();
		else if (*s == '\n' && *(s + 1) == '\n')
			s += 2;
		else
			s++;
	}
	return (0);
}

static int	ft_check_next_diez(char *s, int i, int diez)
{
	if (diez < 4)
	{
		if (s[i + 1] != '#' && s[i + 5] != '#')
		{
			while (s[i - 1] == '#')
			{
				if (s[i + 4] == '#')
					return (0);
				i--;
			}
			return (1);
		}
	}
	return (0);
}

static int	ft_check_shape(char *s, size_t i, int cnt)
{
	int diez;

	diez = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == '#')
		{
			diez++;
			if (ft_check_next_diez(s, i, diez) == 1)
				ft_error();
		}
		if (s[i] == '\n')
			cnt++;
		if (cnt == 4)
		{
			if (diez != 4)
				ft_error();
			diez = 0;
			cnt = 0;
			i++;
		}
		i++;
	}
	return (0);
}

int			ft_check_file(char *str)
{
	size_t 	i;
	int 	cnt;

	i = 0;
	cnt = 0;
	ft_check_char(str);
	ft_check_line(str);
	ft_check_shape(str, i, cnt);
	return (0);
}
