/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <nkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:18:05 by nkrifa            #+#    #+#             */
/*   Updated: 2017/10/21 23:38:26 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		s;
	int		r;
	int		k;

	r = 0;
	s = 1;
	k = 0;
	while (str[k] >= 0 && str[k] <= 32)
		k++;
	if (str[k] == '-')
		s = -1;
	if (str[k] == '+' || str[k] == '-')
		k++;
	while (str[k] && str[k] >= '0' && str[k] <= '9')
	{
		r = r * 10 + str[k] - '0';
		k++;
	}
	return (s * r);
}