/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:51:26 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 11:58:21 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	d = dest;
	if (dest > src)
	{
		src += n;
		dest += n;
		while (n--)
			*(char *)--dest = *(char *)--src;
	}
	else
		ft_memcpy(dest, src, n);
	return (d);
}
