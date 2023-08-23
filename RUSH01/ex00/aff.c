/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:10:27 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/19 18:10:27 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_parametre(char *str)
{
	int	k;

	k = 0;
	while (str[k] && ft_strlen(str) == 31)
	{
		if ((str[k] >= '1' && str[k] <= '4') || str[k] == ' ')
			k++;
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (k == 31)
		{
			return (1);
		}
	}
	write(1, "Error\n", 6);
	return (0);
}

void	ft_aff_tab(int **tab)
{
	int	lig;
	int	col;

	lig = 1;
	while (lig < 5)
	{
		col = 1;
		while (col < 5)
		{
			ft_putchar(tab[lig][col] + '0');
			col++;
		}
		ft_putchar('\n');
		lig++;
	}
}
