/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:22:13 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/19 18:22:14 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_aff_tab(int **tab);
void	init_borders(int **tab, char *str);
int		ft_strlen(char *str);
int		**init_tab(char *str);
int		verif_tab(int **tab);
int		verif_right(int **tab);
int		verif_left(int **tab);
int		verif_up(int **tab);
int		verif_down(int **tab);
int		isValid(int **tab);
int		solve(int **tab, int lig, int col);
int		ft_parametre(char *str);

#endif
