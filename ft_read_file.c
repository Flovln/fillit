/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:21:50 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/18 10:34:46 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../fillit/libft/libft.h"

void	ft_error()
{
	ft_putstr_fd("error", 2);
	exit(0);
}

char	*ft_read_file(char *file)
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
