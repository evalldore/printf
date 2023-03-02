/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 00:41:35 by niceguy           #+#    #+#             */
/*   Updated: 2023/03/01 20:37:59 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrbase_fd(int n, t_bool isUpper, int fd)
{
	uint64_t		cur;

	cur = (uint64_t)n;
	if (n < 0)
		cur = ft_revbits(cur);
	return (ft_puthexa_fd(cur, isUpper, fd));
}
