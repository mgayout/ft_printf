/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:51:26 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 12:51:26 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return 1 if the character is numeric.*/

//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main (void)
{
    char c = 'r';

    printf("%d", ft_isdigit(c));
    return (0);
}*/
