/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:07:29 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:07:32 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	verif_tab(int **tab)
{
	int	lig;
	int	col;
	int	res;

	lig = 1;
	while (lig < 5)
	{
		col = 1;
		res = 0;
		while (col < 5)
		{
			res += tab[lig][col];
			col++;
		}
		if (res > 10)
			return (-1);
		else if (res < 10)
			return (0);
		lig++;
	}
	return (1);
}

int	isvalid(int **tab)
{
	if (verif_up(tab) && verif_down(tab) && verif_left(tab) && verif_right(tab))
		return (1);
	return (0);
}

int	solve(int **tab, int lig, int col)
{
	int	value;

	if (lig == 4) 
	{
		if (isvalid(tab) && verif_tab(tab))
		{
			ft_aff_tab(tab);
			return (1);
		}
		return (0);
	}
	if (col > 4)
		return (solve(tab, lig + 1, 1));
	value = 1;
	while (value <= 4) 
	{
		tab[lig][col] = value;
		if (!(isvalid(tab) && verif_tab(tab)))
			return (solve(tab, lig + 1, 1));
		tab[lig][col] = 0;
		value++;
		ft_aff_tab(tab);
	}
	return (0);
}
