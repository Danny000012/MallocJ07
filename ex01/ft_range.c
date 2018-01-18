/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 08:30:13 by dseabela          #+#    #+#             */
/*   Updated: 2018/01/18 08:35:54 by dseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
