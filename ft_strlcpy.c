/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:09:02 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 12:14:04 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t		srclen;

	srclen = ft_strlen(src);
	if (++srclen < n)
		ft_memcpy(dest, src, srclen);
	else if (n)
	{
		ft_memcpy(dest, src, --n);
		dest[n] = 0;
	}
	return (--srclen);
}
