/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:07:30 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/21 14:07:31 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 2147395600)
		return (46340);
	if (nb > 2147395600)
		return (0);
	while (i * i < nb)
		i ++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}*/
