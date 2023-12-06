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
	char	str[]="(null)";
	if (!s)
		return (ft_putstr_fd(str, fd));
	return (write(fd, s, ft_strlen(s)));
}
