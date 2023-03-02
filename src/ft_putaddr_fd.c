/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 00:41:35 by niceguy           #+#    #+#             */
/*   Updated: 2023/03/02 02:35:45 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putaddr_fd(void *ptr, int fd)
{
	return (write(fd, "0x", 2) + ft_puthexa_fd((uint64_t)ptr, false, fd));
}
