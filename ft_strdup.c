/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:16:24 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 12:07:22 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	l;
	size_t	i;
	char	*r;

	l = ft_strlen(s);
	r = malloc(++l * sizeof(char));
	if (!r)
		return (0);
	i = 0;
	while (--l)
		r[i++] = *s++;
	r[i] = 0;
	return (r);
}
