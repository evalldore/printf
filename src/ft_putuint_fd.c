/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:31:55 by evallee-          #+#    #+#             */
/*   Updated: 2023/03/01 19:01:59 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putuint_fd(unsigned int ui, int fd)
{
	char			c;
	int				i;

	i = 1;
	c = (ui % 10) + '0';
	if (ui >= 10)
		i += ft_putuint_fd((ui / 10), fd);
	write(fd, &c, 1);
	return (i);
}
