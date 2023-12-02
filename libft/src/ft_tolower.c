/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:54:24 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 13:54:24 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*From uppercase to lowercase*/

//#include<stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int main (void)
{
    int c;

    c = 'K';
    printf("%c", ft_tolower(c));
    return 0;
}*/