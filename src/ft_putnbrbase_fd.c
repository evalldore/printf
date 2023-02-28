/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 00:41:35 by niceguy           #+#    #+#             */
/*   Updated: 2023/02/28 05:44:48 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrbase_fd(int n, char *base, int fd)
{
	size_t			base_len;
	unsigned int	cur;
	char			c;
	int				i;

	if (!base || (!base[0] || !base[1]))
		return (0);
	i = 1;
	cur = (unsigned int)n;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		write(fd, "-", 1);
		cur *= -1;
		i++;
	}
	c = base[cur % base_len];
	if (cur >= base_len)
		i += ft_putnbrbase_fd((cur / base_len), base, fd);
	write(fd, &c, 1);
	return (i);
}
