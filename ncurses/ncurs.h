/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ncurs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 12:49:03 by vdanyliu          #+#    #+#             */
/*   Updated: 2019/08/05 15:28:11 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NCURS_H
#	define NCURS_H
# include "../libft/src/libft.h"
# include <ncurses.h>

typedef struct		s_ncurses
{
	WINDOW			*border;
	WINDOW			*menu;

}					t_ncurses;

#endif
