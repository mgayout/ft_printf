/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:41:29 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/23 11:41:29 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a number.*/

#include "libft.h"
#include <unistd.h>

int	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	int			i;
	int			j;

	nb = n;
	i = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	else if (nb < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		nb = -nb;
		i++;
	}
	if (nb > 9)
	{
		j = ft_putnbr_fd(nb / 10, fd);
		if (j == -1)
			return (-1);
		i += j;
	}
	if (ft_putchar_fd((nb % 10) + '0', fd) == - 1)
		return (-1);
	i++;
	return (i);
}
