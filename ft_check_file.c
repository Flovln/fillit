/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:26:28 by fviolin           #+#    #+#             */
/*   Updated: 2016/01/21 15:48:36 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_check_tab(char *str, int *tab)
{
	if (!str[tab[0]])
		ft_error();
	while (str[tab[0]])
	{
		if (str[tab[0]] == '.')
			tab[1]++;
		if (str[tab[0]] == '#')
			tab[2]++;
		if (str[tab[0]] == '\n' && str[tab[0] + 1] != '\n')
			tab[3]++;
		if ((str[tab[0]] == '\n' && str[tab[0] + 1] == '\n')
				|| (str[tab[0]] == '\n' && str[tab[0] + 1] == '\0'))
			tab[4]++;
		tab[0]++;
	}
	if (tab[4] == 0 || tab[1] != (12 * tab[4]) || tab[2] != (4 * tab[4])
			|| tab[3] != (tab[4] * 4))
		ft_error();
	return (0);
}
/*verifie le nombre de ligne par grilles*/
static	int		ft_check_line(char *s)
{
	int count;

	while (*s)
	{
		count = 0;
		while (*s != '\n')
		{
			s++;
			count++;
		}
		if (count != 4)
			ft_error();
		else if (*s == '\n' && *(s + 1) == '\n')
			s += 2;
		else
			s++;
	}
	return (0);
}

static	int		ft_check_next_diez(char *s, int i, int diez)
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

static	int		ft_check_shape(char *s, size_t i, int count)
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
			count++; // count le nombre de ligne
		if (count == 4) // si il y a bien 4 lignes
		{
			if (diez != 4) // si il n'y a pas 4 diez
				ft_error();
			diez = 0;
			count = 0;
			i++;
		}
		i++;
	}
	return (0);
}

int			ft_check_file(char *str)
{
	int i;
	int cnt;
	int *tab;

	i = 0;
	cnt = 0;
	if (!(tab = (int *)malloc(sizeof(int) * 5)))
		ft_error();
	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 0;
	tab[4] = 0;
	ft_check_tab(str, tab);
	ft_check_line(str);
	ft_check_shape(str, i, cnt);
	free(tab);
	tab = NULL;
	ft_strdel(&str);
	return (0);
}
