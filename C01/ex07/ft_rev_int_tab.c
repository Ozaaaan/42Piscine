/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:33:28 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/11 12:58:14 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
int	main()
{
	int tab[6]  = {0, 1, 2, 3, 4, 5};
	int size;
	int i;

	size = 6;
	ft_rev_int_tab(tab, size);
	i = 0;
	while(i <= 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	if (i == 5)
		write(1, "\n", 1);
	return(0);
}*/
