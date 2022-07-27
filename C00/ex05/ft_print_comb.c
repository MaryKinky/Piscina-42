/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:48:32 by marparre          #+#    #+#             */
/*   Updated: 2022/07/16 20:56:49 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int n1, int n2, int n3)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = n1 + '0';
	c2 = n2 + '0';
	c3 = n3 + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (n1 != 7 || n2 != 8 || n3 != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	n_1;
	int	n_2;
	int	n_3;

	n_1 = 0;
	while (n_1 <= 7)
	{
		(n_2 = n_1 + 1);
		while (n_2 <= 8)
		{
			(n_3 = n_2 + 1);
			while (n_3 <= 9)
			{	
				ft_print_number(n_1, n_2, n_3);
				n_3++;
			}
			n_2++;
		}
		n_1++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
