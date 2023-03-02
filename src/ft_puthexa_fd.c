/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:45:32 by evallee-          #+#    #+#             */
/*   Updated: 2023/03/01 20:25:06 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa_fd(uint64_t num, t_bool isUpper, int fd)
{
	char			ch;
	int				i;

	i = 1;
	ch = (num & 0x0F) + '0';
	if (ch > '9')
	{
		if (isUpper)
			ch += 7;
		else
			ch += 39;
	}
	if (num >= 16)
		i += ft_puthexa_fd((num >> 4), isUpper, fd);
	write(fd, &ch, 1);
	return (i);
}
