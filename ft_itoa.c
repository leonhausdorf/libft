/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:25:07 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 13:12:31 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*is_positive(char *p, int *n)
{
	*--p = '0' + (*n % 10);
	*n /= 10;
	return (n);
}

static int	*is_negative(char *p, int *n)
{
	*--p = '0' - (*n % 10);
	*n /= 10;
	return (n);
}

char	*ft_itoa(int n)
{
	static char	buf[19 + 2];
	char		*p;

	p = buf + 19 + 1;
	if (n >= 0)
	{
		while (*is_positive(p--, &n))
			continue ;
		return (ft_substr(p, 0, ft_strlen(p)));
	}
	else
	{
		while (*is_negative(p--, &n))
			continue ;
		*--p = '-';
	}
	return (ft_substr(p, 0, ft_strlen(p)));
}
