/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:02:00 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/19 14:02:01 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	init_borders(int **tab, char *str)
{
	int	cptstr;
	int	cpttab;

	cptstr = 0;
	cpttab = 1;
	while (cptstr < 31)
	{
		if (cptstr < 7)
			tab[0][cpttab] = str[cptstr] - '0';
		else if (cptstr < 15)
			tab[5][cpttab] = str[cptstr] - '0';
		else if (cptstr < 23)
			tab[cpttab][0] = str[cptstr] - '0';
		else if (cptstr < 31)
			tab[cpttab][5] = str[cptstr] - '0';
		cpttab++;
		if (cpttab % 5 == 0)
			cpttab = 1;
		cptstr += 2;
	}
}

int	**init_tab(char *str)
{
	int	nb;
	int	**tab;
	int	i;

	nb = 0;
	tab = malloc(6 * sizeof(int *));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < 6)
	{
		tab[i] = malloc(6 * sizeof(int));
		if (!tab)
			return (NULL);
		i++;
	}
	while (nb < 36)
	{
		tab[nb / 6][nb % 6] = 0;
		nb++;
	}
	init_borders(tab, str);
	return (tab);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		**tab;

	str = argv[1];
	if (argc == 2)
	{
		if (ft_parametre(str))
		{
			tab = init_tab(str);
			solve(tab, 1, 1);
		}
	}
	else
	{
		write(1, "Error\n", 6);
	}
}
