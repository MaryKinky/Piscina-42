/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:59:11 by marparre          #+#    #+#             */
/*   Updated: 2022/07/22 16:15:49 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -1 * nb;
		}		
		if (nb >= 10)
		{	
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		if (nb <= 9)
		{
			n = nb + '0';
			write(1, &n, 1);
		}
	}
}	

/*int	main(void)
{
	ft_putnbr(-214888);
}*/