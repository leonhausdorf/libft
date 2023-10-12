/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:50:30 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 12:53:25 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;

	r = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!r)
		return (0);
	i = 0;
	while (*s)
	{
		r[i] = (*f)(i, *s++);
		i++;
	}
	r[i] = 0;
	return (r);
}
