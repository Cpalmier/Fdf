/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:40:05 by cpalmier          #+#    #+#             */
/*   Updated: 2019/05/06 15:51:11 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../Minilibx/mlx.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct	s_coord
{
	float	x;
	float	y;
	float	z;
}				t_coord;

typedef struct	s_info
{
	int		**tab;
	int		**tab_rot;
	int		**ref_tab;
	int		x;
	int		y;
	int		h;
	int		ref_h;
	int		coef;
	int		cmp_x;
	int		cmp_y;
	int		pos_x;
	int		pos_y;
	int		right;
	int		down;
	int		rota;
	void	*mlx;
	void	*win;
	int		color1;
	int		color2;
	int		mode;
}				t_info;

int				ft_trace_seg(t_info info, t_coord cd1, t_coord cd2);
t_coord			recupts(int x, int y);
void			init_tableau(char *file, t_info *info);
void			verif(char *file);
void			rempli_tableau(t_info *info, char *file);
void			rempli_tableau_rotation(t_info *info, char *file);
void			relie_pts(t_info info);
void			relie_pts_rotation(t_info info);
void			init_info(t_info *info);
void			consigne(t_info info);
void			color_key1(int key, t_info *info);
void			color_key2(int key, t_info *info);
void			deplacement_key(int key, t_info *info);
void			hauteur_key(int key, t_info *info);

#endif
