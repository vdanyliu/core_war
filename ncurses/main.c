/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 12:48:35 by vdanyliu          #+#    #+#             */
/*   Updated: 2019/08/05 17:14:47 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ncurs.h"

void	nc_create_border(t_ncurses *ncurs)
{
	ncurs->border = newwin(64, 192, 0, 0);
	ncurs->menu = newwin(64, 64, 0, 192);
	refresh();
	box(ncurs->border, 0, 0);
	box(ncurs->menu, 0, 0);
	mvwprintw(ncurs->border, 1, 1, "Border");
	mvwprintw(ncurs->menu, 1, 1, "Menu");
	printw("BOLD");
	wrefresh(ncurs->border);
	wrefresh(ncurs->menu);
}

void	nc_init(t_ncurses **ncurs)
{
	*ncurs = (t_ncurses*)malloc(sizeof(t_ncurses));
	initscr();
	noecho();
	raw();
	cbreak();
	nc_create_border(*ncurs);
}

int		main(void)
{
	t_ncurses	*ncurs;
	nc_init(&ncurs);
	getch();
	endwin();
	return (0);
}