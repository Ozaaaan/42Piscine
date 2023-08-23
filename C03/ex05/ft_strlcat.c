/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:36:24 by ozdemir           #+#    #+#             */
/*   Updated: 2023/08/16 10:36:25 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j])
		j++;
	dest_len = j;
	while (src[k])
		k++;
	src_len = k;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src [i] && i < size - dest_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
/*
int main (void)
{
	char src[] = "Demir";
    	char dest[] = "Ozan";
    printf("%d \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}*/
