/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:15:37 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 10:15:37 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;

	r = malloc(nmemb * size);
	if (!r)
		return (NULL);
	ft_bzero(r, nmemb * size);
	return (r);
}
