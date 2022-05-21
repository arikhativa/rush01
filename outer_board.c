/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outer_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:13:52 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 11:47:11 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


void	free_outer_board(int **ob, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ob[i])
			free(ob[i]);
		++i;
	}
	free(ob);
}

char	*fill_line(int *line, char *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = *input - '0';
		input += 2;
		++i;
	}
	return (input);
}

void	parse_outer_board(int **ob, char *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		input = fill_line(ob[i], input);
		++i;
	}
}

int	**create_outer_board(int size)
{
	int	**ob;
	int	i;

	i = 0;
	ob = (int **)malloc(sizeof(int *) * size);
	if (!ob)
		return (NULL);
	while (i < size)
	{
		ob[i] = (int *)malloc(sizeof(int) * size);
		if (!ob[i])
		{
			free_outer_board(ob, i);
			return (NULL);
		}
		++i;
	}
	return ob;
}
