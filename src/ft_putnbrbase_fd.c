/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 00:41:35 by niceguy           #+#    #+#             */
/*   Updated: 2023/03/02 02:28:44 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrbase_fd(int n, t_bool isUpper, int fd)
{
	uint64_t		cur;

	cur = (uint64_t)n;
	return (ft_puthexa_fd(cur, isUpper, fd));
}
