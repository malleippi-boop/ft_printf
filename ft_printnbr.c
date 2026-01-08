/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmanett <frmanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:25:03 by frmanett          #+#    #+#             */
/*   Updated: 2026/01/08 16:52:09 by frmanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	char	number;
	int		result;

	result = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		result += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		result += ft_printnbr(n / 10);
	number = (n % 10) + '0';
	result += write(1, &number, 1);
	return (result);
}
