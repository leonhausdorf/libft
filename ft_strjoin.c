/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:31:14 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 12:30:49 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*s;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	s = malloc(++l1 + ++l2 * sizeof(char));
	if (!s)
		return (NULL);
	ft_strlcpy((char *) s, s1, l1 + l2);
	ft_strlcat((char *) s, s2, l1 + l2);
	return ((char *) s);
}
