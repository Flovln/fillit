/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 10:46:18 by lleverge          #+#    #+#             */
/*   Updated: 2015/12/28 15:10:52 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*tetri_lstnew(char **piece, char let)
{
	t_tetri	*new;

	new = (t_tetri *)malloc(sizeof(t_tetri));
	if (!new)
		return (NULL);
	else
	{
		new->tetri = piece;
		new->letter = let;
		new->width = count_width(piece);
		new->height = count_height(piece);
		new->offsetx = count_offsetx(piece);
		new->offsety = count_offsety(piece);
		new->next = NULL;
	}
	return (new);
}

void		add_end(t_tetri **head, t_tetri *new) //**head?!
{
	t_tetri *cur;

	if (!*head)
	{
		*head = new;
		return ;
	}
	cur = *head;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
}

void		free_list(t_tetri *list)
{
	int		i;
	t_tetri	*tmp;

	i = 0;
	while (list != NULL)
	{
		tmp = list;
		list = list->next;
		free_tab(tmp->tetri);
		tmp->tetri = NULL;
		free(tmp);
	}
	free(list);
}
