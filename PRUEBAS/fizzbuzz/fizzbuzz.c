/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:46:53 by marparre          #+#    #+#             */
/*   Updated: 2022/07/28 16:51:44 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_number(int nb)

{
	char	n;

	if (nb >= 10)
		{	
			ft_print_number(nb / 10);
			ft_print_number(nb % 10);
		}
		if (nb <= 9)
		{
			n = nb + '0';
			write(1, &n, 1);
		}
}

int	main(void)

{
	int	num;

	num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (num % 3 == 0)
			write(1, "fizz", 4);
		else if (num % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_print_number(num);
			write(1, "\n", 1);
			num++;
	}
}
