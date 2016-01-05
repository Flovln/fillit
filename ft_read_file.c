/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:21:50 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/21 17:40:35 by lleverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read_file(char *file)
{
	int		fd;
	char	*buf;

	if ((fd = open(file, O_RDONLY)) == -1)
		ft_error();
	buf = ft_strnew(BUF_SIZE);
	ft_bzero(buf, BUF_SIZE);
	if (read(fd, buf, BUF_SIZE) == -1)
		ft_error();
	if (close(fd) == -1)
		ft_error();
	return (buf);
}

void	ft_error(void)
{
	ft_putstr_fd("error\n", 1);
	exit(0);
}

int		ft_count_char(char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

int		ft_count_tetri(char *s)
{
	int i;

	i = ft_count_char(s, '#');
	i = i / 4;
	free(s);
	return (i);
}

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_strdel(&(tab[i]));
		i++;
	}
	free(tab);
}
