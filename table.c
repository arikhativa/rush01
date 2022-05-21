/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:56:50 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 12:00:55 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_tab(int **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i])
			free(tab[i]);
		++i;
	}
	free(tab);
}

int	**create_tab(int size)
{
	int	**tab;
	int	i;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = (int *)malloc(sizeof(int) * size);
		if (!tab[i])
		{
			free_tab(tab, i);
			return (NULL);
		}
		++i;
	}
	return tab;
}
