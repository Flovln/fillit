/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 14:45:22 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/30 10:21:45 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		count_width(char **piece)
{
	int i;
	int j;
	int count;

	j = 0;
	count = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (piece[i][j] != '.')
			{
				count++;
				break ;
			}
			i++;
		}
		j++;
	}
	return (count);
}

int		count_height(char **piece)
{
	int i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (piece[i][j] != '.')
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (count);
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
		j = 0;
		while (j < 4)
		{
			if (piece[i][j] == '#' && j < offsetx)
				offsetx = j;
			j++;
		}
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
