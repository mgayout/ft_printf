/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:36:04 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/23 11:36:04 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a string.*/

#include "libft.h"
#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (-1);
	while (*s)
	{
		write(fd, s + i, 1);
		i++;
	}
	return (i);
}
