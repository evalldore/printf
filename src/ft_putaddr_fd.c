/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 00:41:35 by niceguy           #+#    #+#             */
/*   Updated: 2023/03/01 15:42:57 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_writeaddr_fd(uint64_t num, int fd)
{
	char			ch;
	int				i;

	i = 1;
	ch = (num & 0x0F) + '0';
	if (ch > '9')
		ch += 0x27;
	if (num >= 16)
		i += ft_writeaddr_fd((num >> 4), fd);
	write(fd, &ch, 1);
	return (i);
}

int	ft_putaddr_fd(void *ptr, int fd)
{
	if (!ptr)
		return (ft_putstr_fd("(nil)", 1));
	write(fd, "0x", 2);
	return (2 + ft_writeaddr_fd((uint64_t)ptr, fd));
}
