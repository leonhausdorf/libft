/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:41:19 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 12:02:01 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sizeHelper(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
		if (*s != c && ++i)
			while (*s && *s++ != c)
				continue ;
	else
		s++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	size_t	i;

	r = (char **)malloc((sizeHelper(s, c) + 1) * sizeof(char *));
	if (!r)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!ft_strchr(s, (int) c))
			{
				r[i++] = ft_substr(s, 0, ft_strlen(s));
				break ;
			}
			r[i++] = ft_substr(s, 0, ft_strchr(s, (int) c) - s);
			s = ft_strchr(s, (int) c);
		}
		else
			s++;
	}
	r[i] = 0;
	return (r);
}
