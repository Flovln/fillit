/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 14:19:23 by lleverge          #+#    #+#             */
/*   Updated: 2015/12/29 13:47:48 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void	remove_piece(t_matrix matrix, char letter)
{
	int i;
	int j;

	i = 0;
	while (MATRIX[i])
	{
		j = 0;
		while (MATRIX[i][j])
		{
			if (MATRIX[i][j] == letter)
				MATRIX[i][j] = '.';
			j++;
		}
		i++;
	}
}

int		valid_piece(int l, int c, t_matrix matrix, t_tetri *list)
{
	int		i;
	int		j;

	if (l + list->height > matrix.height)
		return (1);
	if (c + list->width > matrix.width)
		return (1);
	i = OFFSETY;
	while (i < OFFSETY + list->height)
	{
		j = OFFSETX;
		while (j < OFFSETX + list->width)
		{
			if (TETRI[i][j] == '#' &&
				MATRIX[l + i - OFFSETY][c + j - OFFSETX]
				!= '.')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		put_piece(t_matrix matrix, t_tetri *list, int l, int c)
{
	int i;
	int j;

	i = OFFSETY;
	while (i < OFFSETY + list->height)
	{
		j = OFFSETX;
		while (j <= OFFSETX + list->width)
		{
			if (TETRI[i][j] == '#')
				MATRIX[l + i - OFFSETY][c + j - OFFSETX] = LETTER;
			j++;
		}
		i++;
	}
	print_matrix(matrix);
	ft_putchar('\n');
	return (0);
}

int		solver(t_matrix matrix, t_tetri *list)
{
	int i;
	int j;

	i = 0;
	while (i < matrix.height)
	{
		j = 0;
		while (j < matrix.width)
		{
			if (valid_piece(i, j, matrix, list) == 0)
			{
				put_piece(matrix, list, i, j);
				if (!list->next)
					return (0);
				if (solver(matrix, list->next) == 0)
					return (0);
				else
					remove_piece(matrix, LETTER);
			}
			j++;
		}
		i++;
	}
	return (1);
}
