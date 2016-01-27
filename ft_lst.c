/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 10:46:18 by lleverge          #+#    #+#             */
/*   Updated: 2016/01/27 10:37:37 by fviolin          ###   ########.fr       */
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

void		add_end(t_tetri **head, t_tetri *new)
{
	t_tetri *current;

	if (!*head)
	{
		*head = new;
		return ;
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
}

void		ft_free_list(t_tetri **head)
{
	t_tetri	*current;
	t_tetri	*next;

	current = *head;
	while (current)
	{
		next = current->next;
		ft_free_tab(current->tetri);
		current->tetri = NULL;
		free(current);
		current = next; //assigne next a current, afin de repartir depuis le dernier maillon qui a ete free
	}
	*head = NULL;
}
