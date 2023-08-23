/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:33:53 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/13 21:33:59 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	line_top(int x)
{
	int	cpt_ligne;

	cpt_ligne = 1;
	while (cpt_ligne <= x)
	{
		if (cpt_ligne == 1)
			ft_putchar('o');
		if (cpt_ligne != 1 && cpt_ligne != x)
			ft_putchar('-');
		if (cpt_ligne == x && x > 1)
			ft_putchar('o');
		cpt_ligne++;
	}
	ft_putchar('\n');
}

void	line_mid(int x, int y)
{
	int	cpt_ligne;
	int	cpt_colonne;

	cpt_ligne = 1;
	cpt_colonne = 2;
	if (y > 1)
	{
		while (cpt_colonne < y)
		{
			if (x >= 1 && y > 2)
			{
				if (cpt_ligne == 1 || cpt_ligne == x)
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			if (cpt_ligne == x)
			{
				ft_putchar('\n');
				cpt_ligne = 0;
				cpt_colonne++;
			}
			cpt_ligne++;
		}
	}
}

void	line_bot(int x, int y)
{
	int	cpt_ligne;

	if (y > 1)
	{
		cpt_ligne = 1;
		while (cpt_ligne <= x)
		{
			if (x >= 1 && y > 1)
			{
				if (cpt_ligne == 1)
					ft_putchar('o');
				if (cpt_ligne != 1 && cpt_ligne != x)
					ft_putchar('-');
				if (cpt_ligne == x && x > 1)
				{
					ft_putchar('o');
					ft_putchar('\n');
				}
			}
			cpt_ligne++;
		}
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	line_top(x);
	line_mid(x, y);
	line_bot(x, y);
}
