/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 17:20:42 by lleverge          #+#    #+#             */
/*   Updated: 2015/12/28 17:03:10 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			*ft_newline(int size)
{
	char		*str;
	int			i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = '.';
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_matrix		init_matrix(int size)
{
	t_matrix	matrix;
	int			i;

	i = 0;
	MATRIX = (char **)malloc(sizeof(char *) * (size + 1));
	while (i < size)
	{
		MATRIX[i] = ft_newline(size);
		i++;
	}
	MATRIX[i] = 0;
	matrix.height = size;
	matrix.width = size;
	matrix.pos_x = 0;
	matrix.pos_y = 0;
	return (matrix);
}

t_matrix		increase_matrix(t_matrix matrix)
{
	t_matrix	new_matrix;

	new_matrix = init_matrix(matrix.height + 1);
	ft_free_matrix(&matrix);
	return (new_matrix);
}

void			ft_free_matrix(t_matrix *matrix)
{
	ft_free_tab(matrix->draw);
	matrix = NULL;
}

void			print_matrix(t_matrix matrix)
{
	int i;

	i = 0;
	while (MATRIX[i])
	{
		ft_putstr(MATRIX[i]);
		ft_putchar('\n');
		i++;
	}
}
