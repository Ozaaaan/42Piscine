/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:46:27 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/22 18:46:29 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		taille;
	char	*res;

	i = 0;
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		taille += ft_strlen(strs[i]);
		taille += ft_strlen(sep);
		i++;
	}
	res = malloc(sizeof(char) * taille + 1);
	if (!res)
		return (NULL);
	i = 1;
	while (i < size)
	{
		res = ft_strcat(res, strs[i]);
		if (!(i == size - 1))
			res = ft_strcat(res, sep);
		i++;
	}
	return (res);
}
/*
int	main(int argc, char **argv)
{
	printf("%s",ft_strjoin(argc, argv, ", "));
}*/
