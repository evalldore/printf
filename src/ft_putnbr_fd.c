/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:31:55 by evallee-          #+#    #+#             */
/*   Updated: 2023/02/23 20:40:13 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	cur;
	char			c;

	cur = (unsigned int)n;
	if (n < 0)
	{
		write(fd, "-", 1);
		cur *= -1;
	}
	c = (cur % 10) + '0';
	if (cur >= 10)
	{
		ft_putnbr_fd((cur / 10), fd);
	}
	write(fd, &c, 1);
}
