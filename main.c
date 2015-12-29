/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 15:06:47 by lleverge          #+#    #+#             */
/*   Updated: 2015/12/29 16:24:58 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_split_tetri(char **tab, int start, int end)
{
	char	**piece;
	int		i;

	i = 0;
	piece = (char **)malloc(sizeof(char *) * 5);
	while (start <= end && tab[start])
	{
		piece[i] = ft_strdup(tab[start]);
		start++;
		i++;
	}
	piece[i] = 0;
	return (piece);
}

char		**pieces_intab(char *file_name)
{
	char	buf[BUF_SIZE];
	int		fd;
	int		ret;
	char	**tab;
	int		i;

	i = 0;
	buf[545] = '\0';
	ft_bzero(buf, BUF_SIZE);
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open error\n");
		return (NULL);
	}
	ret = read(fd, buf, BUF_SIZE);
	tab = ft_strsplit(buf, '\n');
	close(fd);
	return (tab);
}

t_tetri		*piece_inlist(int piece_nbr, char **tab)
{
	int		i;
	char	c;
	t_tetri	*head;

	i = 0;
	c = 65;
	head = NULL;
	add_end(&head, tetri_lstnew(ft_split_tetri(tab, i, i + 3), c));
	piece_nbr--;
	while (piece_nbr--)
	{
		i += 4;
		c += 1;
		add_end(&head, tetri_lstnew(ft_split_tetri(tab, i, i + 3), c));
	}
	return (head);
}

int			main(int ac, char **av)
{
	int			piece_nbr;
	char		**tab;
	t_tetri		*list;
	t_matrix	matrix;

	if (ac != 2)
		ft_error();
	else if (ft_check_file(ft_read_file(av[1])) == 1)
	{
		piece_nbr = ft_count_tetri(ft_read_file(av[1]));
		//printf("Nb tetri : %d\n\n", piece_nbr);
		tab = pieces_intab(av[1]);
		list = piece_inlist(piece_nbr, tab);
		free_tab(tab);
		//printf("Hauteur: %d\nLargeur: %d\n", list->height, list->width);
		//printf("Offx: %d\nOffy: %d\n", OFFSETX, OFFSETY);
		matrix = init_matrix(2);
		while (solver(matrix, list) == 1)
			//i++;
			//printf("taille matrice: %d\n", i);
			matrix = increase_matrix(matrix);
		free_list(list);
		print_matrix(matrix);
		free_matrix(&matrix);
	}
	else
		ft_putstr("error\n");
	return (0);
}
