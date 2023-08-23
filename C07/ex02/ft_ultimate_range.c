/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:02:27 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/22 18:02:28 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = (max - min);
	i = 0;
	*range = (int *) malloc(sizeof(int) * len + 1);
	if (!*range)
		return (-1);
	while (i <= len)
	{
		(*range)[i] = min + i;
		i++;
	}
	(*range)[i] = '\0';
	return (len);
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
	taille = ft_ultimate_range(&tab ,min, max);
	while (i < taille)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
