/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:49:21 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/17 17:20:04 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>

# define BUF_SIZE 545 //26 pieces max x (1 grille =) 21 caracteres (20 + \n final ou \0 pour la derniere)
//# define FALSE 0
//# define TRUE 1

void	ft_error();
char	*ft_read_file(char *file);
int		ft_check_file(char *s);
int		ft_count_tetri(char *s);
int		ft_count_char(char *s, char c);

#endif
