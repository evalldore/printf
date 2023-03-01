/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 00:41:35 by niceguy           #+#    #+#             */
/*   Updated: 2023/03/01 05:40:41 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putaddr_fd(void *ptr, int fd)
{
	uint64_t		num;
	int				i;
	uint8_t			ch;
	char			add[15];

	if (!ptr)
		return (ft_putstr_fd("(nil)", 1));
	num = (uint64_t)ptr;
	i = 13;
	(void)ft_memcpy(add, "0x000000000000", 15);
	while (i >= 2)
	{
		ch = (num & 0x0F) + '0';
		if (ch > '9')
			ch += 0x27;
		add[i] = ch;
		num >>= 4;
		i--;
	}
	add[15] = '\0';
	write(fd, &add[0], 14);
	return (14);
}
