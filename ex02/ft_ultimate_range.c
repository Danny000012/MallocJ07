/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 08:39:28 by dseabela          #+#    #+#             */
/*   Updated: 2018/01/18 09:16:47 by dseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate(int **range, int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
