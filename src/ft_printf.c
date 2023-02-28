/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:18:29 by evallee-          #+#    #+#             */
/*   Updated: 2023/02/27 21:02:39 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Your function has to handle the following conversions: cspdiuxX%

You have to implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/

#include "libft.h"

static int	ft_writearg(va_list *args, char c)
{
	if (!c)
		return (0);
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(*args, int), 1);
		return (1);
	}
	if (c == 's')
	{
		ft_putstr_fd(va_arg(*args, char *), 1);
		return (1);
	}
	if (c == 'd')
	{
		ft_putnbr_fd(va_arg(*args, int), 1);
		return (1);
	}
	return (0);
}

static int	ft_writestr(va_list *args, const char *f)
{
	int		len;
	char	ct;

	len = 0;
	while (*f)
	{
		ct = *f++;
		if (ct != '%')
			len += write(1, &ct, 1);
		else
			len += ft_writearg(args, *f++);
	}
	write(1, "\n", 1);
	return (len);
}

int	ft_printf(const char *f, ...)
{
	va_list			args;
	int				len;

	va_start(args, f);
	len = ft_writestr(&args, f);
	va_end(args);
	return (len);
}
