/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmanett <frmanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:22:18 by frmanett          #+#    #+#             */
/*   Updated: 2026/01/08 16:47:22 by frmanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long n, short flag)
{
	char	number;
	int		result;
	int		index;
	char	*arr;

	arr = "0123456789abcdef";
	result = 0;
	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (flag == 1)
		result += write(1, "0x", 2);
	if (n >= 16)
		result += ft_printptr(n / 16, 0);
	index = (n % 16);
	number = arr[index];
	result += write(1, &number, 1);
	return (result);
}
