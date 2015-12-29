/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 14:45:22 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/29 13:00:43 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		count_height(char **piece)
{
	int i;
	int j;
	int count;
	int	count_max;

	j = 0;
	count_max = 0;
	while (j < 4)
	{
		i = 0;
		count = 0;
		while (i < 4)
		{
			if (piece[i][j] == '#')
				count++;
			if (count > count_max)
				count_max = count;
			i++;
		}
		j++;
	}
	return (count_max);
}

int		count_width(char **piece)
{
	int i;
	int	j;
	int	count;
	int	count_max;

	i = 0;
	count = 0;
	count_max = 0;
	while (piece[i])
	{
		j = 0;
		count = 0;
		while (piece[i][j])
		{
			if (piece[i][j] == '#')
				count++;
			j++;
		}
		if (count > count_max)
			count_max = count;
		i++;
	}
	return (count_max);
}

int		count_offsetx(char **piece)
{
	int	i;
	int j;
	int	offsetx;

	i = 0;
	offsetx = 42;
	while (i < 4)
	{
		while (j < 4)
		{
			if (piece[i][j] == '#' && j < offsetx)
				offsetx = j;
			j++;
		}
		j = 0;
		i++;
	}
	return (offsetx);
}

int		count_offsety(char **piece)
{
	int i;
	int j;

	i = 0;
	while (piece[i])
	{
		j = 0;
		while (piece[i][j])
		{
			if (piece[i][j] == '#')
				return (i);
			j++;
		}
		i++;
	}
	return (-42);
}
