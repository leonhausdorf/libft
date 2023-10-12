/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:49:43 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 12:49:47 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = 0;
	while (1)
	{
		if (*s == c)
			r = (char *) s;
		if (!*s++)
			break ;
	}
	return (r);
}
