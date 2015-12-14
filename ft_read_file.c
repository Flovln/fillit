/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:21:50 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/14 11:26:33 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

char	*ft_read_file(char *file) //pointe sur un char car la fonction return un pointeur sur char
{
	int		fd;
	char	*buf;

	if ((fd = open(file, O_RDONLY)) == - 1)
		ft_error();
	buf = ft_strnew(BUF_SIZE);
	ft_bzero(buf, BUF_SIZE);
	if (read(fd, buf, BUF_SIZE) == - 1)
		ft_error();
	if (close(fd) == - 1)
		ft_error();
	return (buf);
}
