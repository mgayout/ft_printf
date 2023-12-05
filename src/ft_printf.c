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

#include "../ft_printf.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_format(char format, va_list args);

int	ft_hexa(const int fd, const char *base, long n);

int	ft_putnbr_unsigned(unsigned int n, const int fd);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		size;
	int		i;
	int		j;

	i = 0;
	size = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = ft_format(format[i], args);
			if (j == -1)
				return (-1);
			size += j;
		}
		else if (ft_putchar_fd(format[i], 1) == -1)
			return (-1);
		else
			size++;
		if (format[i])
			i++;
	}
	va_end(args);
	return (size);
}

int	ft_format(char format, va_list args)
{
	const char	base1[] = "0123456789abcdef";
	const char	base2[] = "0123456789ABCDEF";
	const int	fd = 1;

	if (format == 'c')
		return (ft_putchar_fd(va_arg(args, int), fd));
	if (format == 's')
		return (ft_putstr_fd(va_arg(args, char *), fd));
	if (format == 'd' || format == 'i')
		return (ft_putnbr_fd(va_arg(args, int), fd));
	if (format == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int), fd));
	if (format == 'x')
		return (ft_hexa(fd, base1, va_arg(args, unsigned int)));
	if (format == 'X')
		return (ft_hexa(fd, base2, va_arg(args, unsigned int)));
	if (format == 'p')
		return (ft_hexa(fd, base1, va_arg(args, unsigned long)));
	if (format == '%')
		return (ft_putchar_fd('%', fd));
	return (-1);
}

int	ft_hexa(const int fd, const char *base, long n)
{
	int	size;

	size = 0;
	if (n >= 16)
	{
		size++;
		ft_hexa(fd, base, n / 16);
	}
	ft_putchar_fd(base[n % 16], fd);
	size++;
	return (size);
}

int	ft_putnbr_unsigned(unsigned int n, const int fd)
{
	int	size;

	size = 0;
	if (n >= 10)
	{
		size++;
		ft_putnbr_unsigned(n / 10, fd);
	}
	ft_putnbr_fd(n % 10, fd);
	size++;
	return (size);
}
/*
int main (void)
{
	const char format[]="%c";
	char	c;
	char	d;
	int	n;

	n = 5;
	c = '4';
	d = '7';
	ft_printf("%c %c", c, d);
	printf("\n");
	printf("%c %c", c, d);
	//printf("%d", printf("%d\n", n));
	printf("\n");
	return (0);
}*/