/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:39:38 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/21 18:39:38 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a character.*/

#include "libft.h"
#include <unistd.h>

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
