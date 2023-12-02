#include "../include/ft_printf.h"
#include "../include/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int		ft_format(char format, va_list args);

int	ft_hexa(int);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*type;
	int		i;

	type = (char *)format;
	va_start (args, format);
	i = 1;
	ft_format(type[i], args);
	va_end(args);
	return (0);
}

int	ft_format(char format, va_list args)
{
	const int	fd = 1;
	int	size;

	size = 0;
	if (format == 'c')
		printf("%c", va_arg(args, int));
	else if (format == 's')
		printf("%s", va_arg(args, char*));
	else if (format == 'd' || format == 'i')
		printf("%d", va_arg(args, int));

	else if (format == 'x' || format == 'X' || format == 'p')
	{
		size = ft_hexa(va_arg(args, unsigned int));
		if (format == 'X');
			//while(va_arg(args, int))
				//toupper(va_arg(args, int));
	}
	else if (format == '%')
		printf("%%", '%');
	return (sizeof(va_arg(args, char *)));
}

int	ft_hexa(int n)
{
	const char	base[]="0123456789abcdef";
	char	str[5];
	int		i;

	i = 3;
	while (n != 0)
	{
		if (n > 16)
			strncpy(str + i, base + (n % 16), 1);
		else
			strncpy(str + i, base + n, 1);
		n /= 16;
		i--;
	}
	str[4]= '\0';
	printf("%s", str);
	return (sizeof(str));
}

int main (void)
{
	const char format[]="%x";
	unsigned int	x;

	x = 3276;
	ft_printf(format, x);
	printf("\n");
	printf("%x", x);
	return (0);
}