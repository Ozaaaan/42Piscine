/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   border.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:07:29 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/20 17:07:32 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_right(int **tab)
{
	int	visible;
	int	tallest;
	int	lig;
	int	col;

	lig = 1;
	while (lig < 5)
	{
		visible = 0;
		tallest = 0;
		col = 4;
		while (col >= 1)
		{
			if (tab[lig][col] > tallest)
			{
				tallest = tab[lig][col];
				visible++;
			}
			col--;
		}
		lig++;
	}
	if (visible != tab[lig][5])
		return (0);
	return (1);
}

int	verif_left(int **tab)
{
	int	visible;
	int	tallest;
	int	lig;
	int	col;

	lig = 1;
	while (lig < 5)
	{
		visible = 0;
		tallest = 0;
		col = 1;
		while (col < 5)
		{
			if (tab[lig][col] > tallest)
			{
				tallest = tab[lig][col];
				visible++;
			}
			col++;
		}
		lig++;
	}
	if (visible != tab[lig][0])
		return (0);
	return (1);
}

int	verif_up(int **tab)
{
	int	col;
	int	lig;
	int	visible;
	int	tallest;

	col = 1;
	while (col < 5) 
	{
		visible = 0;
		tallest = 0;
		lig = 1;
		while (lig < 5) 
		{
			if (tab[lig][col] > tallest) 
			{
				tallest = tab[lig][col];
				visible++;
			}
			lig++;
		}
		if (visible != tab[0][col]) 
			return (0);
		col++;
	}
	return (0);
}

int	verif_down(int **tab)
{
	int	col;
	int	lig;
	int	visible;
	int	tallest;

	col = 1;
	while (col < 5) 
	{
		visible = 0;
		tallest = 0;
		lig = 4;
		while (lig >= 1) 
		{
			if (tab[lig][col] > tallest) 
			{
				tallest = tab[lig][col];
				visible++;
			}
			lig--;
		}
		if (visible != tab[5][col]) 
			return (0);
		col++;
	}
	return (1);
}
