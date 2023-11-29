/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <erpiana@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:17:04 by erpiana           #+#    #+#             */
/*   Updated: 2023/11/29 03:18:37 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_format(int n, va_list ap)
{
	int	count;

	count = 0;
	if (n == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (n == 's')
		count += ft_putstr(va_arg(ap, const char *));
	else if (n == 'd' || n == 'i')
		count += ft_putnumber(va_arg(ap, int));
	else if (n == 'u')
		count += ft_put_un_nbr(va_arg(ap, unsigned int));
	else if (n == 'x' || n == 'X')
		count += ft_puthexa(va_arg(ap, unsigned int), n);
	else if (n == 'p')
		count += ft_puthexa(va_arg(ap, unsigned long long), n);
	else if (n == '%')
		count += ft_putchar(n);
	return (count);
}
