/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmanett <frmanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:31:38 by frmanett          #+#    #+#             */
/*   Updated: 2026/01/08 16:58:00 by frmanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checktype(char type, va_list args)
{
	int	result;

	result = 0;
	if (type == 'c')
		result += ft_printchar(va_arg(args, int));
	else if (type == 's')
		result += ft_printstr(va_arg(args, char *));
	else if (type == 'p')
		result += ft_printptr(va_arg(args, unsigned long long), 1);
	else if (type == 'd' || type == 'i')
		result += ft_printnbr(va_arg(args, int));
	else if (type == 'u')
		result += ft_printunsignednbr(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		result += ft_printhexa(va_arg(args, unsigned int), type);
	else if (type == '%')
		result += write(1, "%%", 1);
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		result;
	int		i;

	va_start(args, str);
	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			result += ft_checktype(str[i + 1], args);
			i++;
		}
		else
			result += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (result);
}

/* 
int	main(void)
{
	int i = 123456;
	printf("mio:\n");
	ft_printf("\nlen = %d", ft_printf("ciao %s tutti %x", "bell", NULL));
	printf("\n");
	printf("\n");
	printf("originale:\n");
	printf("\nlen = %d", printf("ciao %s tutti %x", "bell", NULL));
	printf("\n");
} */