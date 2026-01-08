/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignednbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmanett <frmanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:37:15 by frmanett          #+#    #+#             */
/*   Updated: 2026/01/08 16:47:22 by frmanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsignednbr(unsigned int n)
{
	char	number;
	int		result;

	result = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n >= 10)
		result += ft_printunsignednbr(n / 10);
	number = (n % 10) + '0';
	result += write(1, &number, 1);
	return (result);
}
