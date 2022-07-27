/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:57:39 by marparre          #+#    #+#             */
/*   Updated: 2022/07/21 15:51:10 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	temp = 0;
	while (j < size)
	{
		i = j + 1;
		while (i < size)
		{	
			if (tab[i] < tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}	
			i++;
		}
		j++;
	}
}
/*
int	main(void)
{
	int	tab[] = {6, 9, 4, 3, 7, -98, 7, 7, 1};
	int	size;
	int i;

	i = 0;
	size = 9;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
