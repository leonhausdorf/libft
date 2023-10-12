/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhausdor <lhausdor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:17:03 by lhausdor          #+#    #+#             */
/*   Updated: 2021/07/07 10:41:06 by lhausdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		n;

	n = 1;
	i = 0;
	while (*str && is_space(*str))
		++str;
	if (*str == '-')
		n = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - 48);
		++str;
	}
	return (i * n);
}
