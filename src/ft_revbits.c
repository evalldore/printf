/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revbits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:11:06 by evallee-          #+#    #+#             */
/*   Updated: 2023/03/01 20:13:01 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

u_int32_t	ft_revbits(int num)
{
	unsigned int	i;
	unsigned int	nbits;
	u_int32_t		revbits;

	nbits = sizeof(num) * 8;
	revbits = 0;
	i = 0;
	while (i < nbits)
	{
		if (num & (1 << i))
			revbits |= 1 << ((nbits - 1) - i);
		i++;
	}
	return (revbits);
}
