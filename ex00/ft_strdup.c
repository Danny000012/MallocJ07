/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 18:25:23 by dseabela          #+#    #+#             */
/*   Updated: 2018/01/18 08:27:59 by dseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*new_string;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	new_string = (char *)malloc(sizeof(*new_string) * (i + 1));
	while (src[j] != '\0')
	{
		new_string[j] = src[j];
		j++;
	}
	new_string[j] = '\0';
	return (new_string);
}
