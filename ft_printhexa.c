/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmanett <frmanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:40:46 by frmanett          #+#    #+#             */
/*   Updated: 2026/01/08 16:50:09 by frmanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int	ft_printhexa(unsigned int n, char c)
{
	char	number;
	int		result;
	int		index;
	char	*arr;

	arr = "0123456789abcdef";
	result = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n >= 16)
		result += ft_printhexa(n / 16, c);
	index = (n % 16);
	number = arr[index];
	if (c == 'X')
		number = ft_toupper(number);
	result += write(1, &number, 1);
	return (result);
}
