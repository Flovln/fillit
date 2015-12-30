/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:35:48 by lleverge          #+#    #+#             */
/*   Updated: 2015/12/30 11:46:29 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <fcntl.h>
# define BUF_SIZE 546
# define OFFSETX list->offsetx
# define OFFSETY list->offsety
# define LETTER list->letter
# define TETRI list->tetri
# define MATRIX matrix.draw

typedef struct			s_matrix
{
	char				**draw;
	int					height;
	int					width;
	int					pos_x;
	int					pos_y;
}						t_matrix;

typedef struct			s_tetri
{
	char				**tetri;
	int					width;
	int					height;
	int					offsetx;
	int					offsety;
	char				letter;
	struct s_tetri		*next;
}						t_tetri;

t_tetri					*tetri_lstnew(char **piece, char let);
void					add_end(t_tetri **head, t_tetri *new);
void					print_matrix(t_matrix matrix);
void					free_list(t_tetri *list);
void					free_tab(char **tab);
void					free_matrix(t_matrix *matrix);
char					*ft_newline(int size);
t_matrix				increase_matrix(t_matrix matrix);
t_matrix				init_matrix(int size);
void					remove_piece(t_matrix matrix, char letter);
int						valid_piece(int i, int j,
						t_matrix matrix, t_tetri *list);
int						put_piece(t_matrix matrix, t_tetri *list, int c, int l);
int						solver(t_matrix matrix, t_tetri *list);
char					**ft_split_tetri(char **tab, int start, int end);
char					**pieces_intab(char *file_name);
t_tetri					*tetri_lstnew(char **piece, char let);
int						count_offsety(char **piece);
int						count_offsetx(char **piece);
int						count_width(char **piece);
int						count_height(char **piece);
t_tetri					*piece_inlist(int piece_nbr, char **tab);
int						place_piece(t_tetri tetri, char *map);
void					ft_error(void);
char					*ft_read_file(char *file);
int						ft_check_file(char *s);
int						ft_count_tetri(char *s);
int						ft_count_char(char *s, char c);

#endif
