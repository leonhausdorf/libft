/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:57:20 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 12:06:01 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		len;
	size_t		dlen;

	d = dest;
	s = src;
	len = n;
	while (len-- && *d)
		d++;
	dlen = d - dest;
	len = n - dlen;
	if (len == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (len != 1)
		{
			*d++ = *s;
			len--;
		}
		s++;
	}
	*d = 0;
	return (dlen + (s - src));
}
