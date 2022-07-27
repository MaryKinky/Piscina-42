/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:30:19 by marparre          #+#    #+#             */
/*   Updated: 2022/07/22 16:09:54 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_n(int a)
{
	char	c_1;
	char	c_2;

	c_1 = a / 10 + '0';
	c_2 = a % 10 + '0';
	write(1, &c_1, 1);
	write(1, &c_2, 1);
}

void	ft_print_comb2(void)
{
	char	n_1;
	char	n_2;

	n_1 = 0;
	while (n_1 <= 98)
	{
		n_2 = n_1 + 1;
		while (n_2 <= 99)
		{
			ft_print_n(n_1);
			write(1, " ", 1);
			ft_print_n(n_2);
			if (!(n_1 == 98 && n_2 == 99))
				write(1, ", ", 2);
			n_2++;
		}
		n_1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
