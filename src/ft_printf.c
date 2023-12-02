/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:02:30 by mgayout           #+#    #+#             */
/*   Updated: 2023/12/01 11:02:30 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"
#include <stdio.h>
#include <stdarg.h>

int		ft_format(char format, va_list args);

int	ft_hexa(int);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		size;
	int		i;

	i = 1;
	va_start (args, format);
	size = ft_format(format[i], args);
	va_end(args);
	return (size);
}

int	ft_format(char format, va_list args)
{
	const int	fd = 1;

	if (format == 'c')//Bon
		ft_putchar_fd(va_arg(args, int), fd);
	else if (format == 's')//Bon
		ft_putstr_fd(va_arg(args, char*), fd);
	else if (format == 'd' || format == 'i')
		ft_putnbr_fd(va_arg(args, int), fd);
	else if (format == 'x' || format == 'X' || format == 'p')
	{
		ft_hexa(va_arg(args, unsigned int));
		if (format == 'X');
			while(va_arg(args, int))
				ft_toupper(va_arg(args, int));
		ft_putstr_fd(va_arg(args, char*), fd);
	}
	else if (format == '%')
		ft_putchar_fd('%', fd);
	return (sizeof(va_arg(args, char *)));
}

int	ft_hexa(int n)
{
	char	str[8];
	int 	quotient;
	int		i;

	quotient = 0;
	i = 7;
	while (i != 0)
	{
		if (n > 16)
			quotient = (n % 16) + 48;
		else
			quotient = n;
		n /= 16;
		str[i] = quotient;
		i--;
	}
	str[9] = '\0';
	n = ft_atoi(str);
	return (n);
}

int main (void)
{
	const char format[]="%d";
	unsigned int	nb;

	nb = '5';
	ft_printf(format, nb);
	printf("\n");
	printf("%d", nb);
	printf("\n");
	return (0);
}