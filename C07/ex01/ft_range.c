/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:40:11 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/22 15:40:12 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = (max - min);
	i = 1;
	tab = (int *) malloc(sizeof(int) * len + 1);
	tab[0] = min;
	if (!tab)
		return (NULL);
	while (i <= len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	taille;
	int	i;
	
	i = 0;
	min = 2;
	max = 10;
	taille = max - min;
	tab = ft_range(min, max);
	while (i < taille)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
